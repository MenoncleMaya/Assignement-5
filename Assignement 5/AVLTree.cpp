#include "AVLTree.h"

//Partly done with Dara's code

AVLTree::AVLTree()
{
	root = NULL;
}

Node* AVLTree::insert(Node* node, int value)
{
	if (node == NULL)
	{
		return new Node(value);
	}
	if (value < node->value)
	{
		node->left = insert(node->left, value);
	}
	else if (value > node->value)
	{
		node->right = insert(node->right, value);
	}
	else
	{
		return node;
	}

	node->height = 1 + max(height(node->left), height(node->right));
	int balance = getBalance(node);

	if (balance > 1 && value < node->left->value)
	{
		return rotateRight(node);
	}

	if (balance < -1 && value < node->right->value)
	{
		return rotateLeft(node);
	}

	if (balance > 1 && value > node->left->value)
	{
		node->left = rotateLeft(node->left);
		return rotateRight(node);
	}

	if (balance < -1 && value < node->right->value)
	{
		node->right = rotateRight(node->right);
		return rotateLeft(node);
	}

	return node;
}

Node* AVLTree::remove(Node* node, int value)
{
	if (node == NULL)
	{
		return node;
	}

	if (value < node->value)
	{
		node->left = remove(node->left, value);
	}

	else if (value > node->value)
	{
		node->right = remove(node->right, value);
	}

	else
	{
		if (node->left == NULL || node->right == NULL)
		{
			Node* temp = node->left ? node->left : node->right;
			if (temp == NULL)
			{
				temp = node;
				node = NULL;
			}
			else
			{
				*node = *temp;
			}
			delete temp;
		}
		else
		{
			Node* temp = getMinValueNode(node->right);
			node->value = temp->value;
			node->right = remove(node->right, temp->value);
		}
	}

	if (node == NULL)
	{
		return node;
	}

	node->height = 1 + max(height(node->left), height(node->right));
	int balance = getBalance(node);

	if (balance > 1 && getBalance(node->left) >= 0)
	{
		return rotateRight(node);
	}

	if (balance > 1 && getBalance(node->left) < 0)
	{
		node->left = rotateLeft(node->left);
		return rotateRight(node);
	}

	if (balance < -1 && getBalance(node->right) <= 0)
	{
		return rotateLeft(node);
	}

	if (balance < -1 && getBalance(node->right) >0)
	{
		node->right = rotateRight(node->right);
		return rotateLeft(node);
	}

	return node;
}

Node* AVLTree::search(Node* node, int value)
{
	if (node == NULL || node->value == value)
	{
		return node;
	}
	if (value < node->value)
	{
		return search(node->left, value);
	}
	else
	{
		return search(node->right, value);
	}
}

void AVLTree::inOrderSearch(Node* node)
{
	if (node == NULL)
	{
		return;
	}
	inOrderSearch(node->left);
	cout << node->value << " ";
	inOrderSearch(node->right);
}

void AVLTree::preOrderSearch(Node* node)
{
	if (node != NULL)
	{
		cout << node->value << " ";
		preOrderSearch(node->left);
		preOrderSearch(node->right);
	}
}

void AVLTree::postOrderSearch(Node* node)
{
	if (node == NULL)
	{
		return;
	}
	postOrderSearch(node->left);
	postOrderSearch(node->right);

	cout << node->value << " ";
}

int AVLTree::height(Node* node)
{
	if (node == NULL)
	{
		return 0;
	}
	return node->height;
}

int AVLTree::balanceFactor(Node* node)
{
	if (node == NULL)
	{
		return 0;
	}
	return height(node->left) - height(node->right);
}

Node* AVLTree::rotateRight(Node* node)
{
	Node* newRoot = node->left;
	node->left = newRoot->right;
	newRoot->right = node;
	node->height = 1 + max(height(node->left), height(node->right));
	newRoot->height = 1 + max(height(newRoot->left), height(newRoot->right));
	return newRoot;
}

Node* AVLTree::rotateLeft(Node* node)
{
	Node* newRoot = node->right;
	node->right = newRoot->left;
	newRoot->left = node;
	node->height = 1 + max(height(node->left), height(node->right));
	newRoot->height = 1 + max(height(newRoot->left), height(newRoot->right));
	return newRoot;
}

Node* AVLTree::getMinValueNode(Node* node)
{
	Node* current = node;
	while (current->left != NULL)
	{
		current = current->left;
	}
	return current;
}

int AVLTree::getBalance(Node* node)
{
	if (node == NULL)
	{
		return 0;
	}

	return height(node->left) - height(node->right);
}