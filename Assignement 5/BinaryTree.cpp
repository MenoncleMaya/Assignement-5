

#include "BinaryTree.h"

//Constructeur par défaut 
BinarySearchTree::BinarySearchTree() {
	root = NULL;
}

//Fonction pour ajouter un Node dans le BinaryTree
BinarySearchTree::Node* BinarySearchTree::addNode(Node* node, CinemaRoom data) {
	if (node == NULL) {
		node = new Node;
		node->data = data;
		node->left = node->right = NULL;
	}
	else if (data.roomNumber < node->data.roomNumber) {
		node->left = addNode(node->left, data);
	}
	else {
		node->right = addNode(node->right, data);
	}
	return node;
}

//Fonction pour ajouter une nouvelle salle de cinéma 
void BinarySearchTree::addCinemaRoom(CinemaRoom data) {
	root = addNode(root, data);
}

//Fonction pour afficher les données d'un Node 
void BinarySearchTree::displayNode(Node* node) {

}

//Fonction pour afficher toutes les salles de cinéma 
void BinarySearchTree::displayAllCinemaRooms() {
	Node* temp = root;
	cout << "Voici toutes les listes de cinema : " << endl;
	while (temp != NULL) {
		cout << "Salle de cinema n°" << temp->data.roomNumber << endl;
		temp = temp->next;
	}
}

// Fonction pour chercher une salle de cinéma par numéro de salle 
BinarySearchTree::Node* BinarySearchTree::searchCinemaRoom(int roomNumber) {
	Node* temp = root;
	while (temp != NULL) {
		if (temp->data.roomNumber == roomNumber) {
			cout << "La salle de cinema n°" << roomNumber << " a ete trouvee!";
			return temp;
		}

		temp = temp->next;
	}
	cout << "La salle de cinéma n°" << roomNumber << " n'a pas ete trouvee!" << endl;
	return NULL;
}

// Fonction pour supprimer une salle de cinéma par numéro de salle 
void BinarySearchTree::removeCinemaRoom(int roomNumber) {
	Node* temp = root;
	Node* prev = NULL;
	while (temp != NULL && temp->data.roomNumber != roomNumber) {
		prev = temp;
		temp = temp->next;
	}
	if (temp == NULL) {
		cout << "La salle de cinema n°" << roomNumber << " n'a pas ete trouvee et ne peut pas etre supprimee!" << endl;
		return;
	}
	if (prev == NULL) {
		root = temp->next;
	}
	else {
		prev->next = temp->next;
	}
	delete temp;
	cout << "La salle de cinéma n°" << roomNumber << " a ete supprimee avec succes!" << endl;

}

//Fonction pour effectuer un parcours InOrder du Tree
void BinarySearchTree::inOrderTraversal(Node* node) {
	if (node != NULL) {
		inOrderTraversal(node->left);
		cout << "Salle de cinéma n°" << node->data.roomNumber << endl;
		inOrderTraversal(node->right);
	}
}

//Fonction pour supprimer un Node du Tree
BinarySearchTree::Node* BinarySearchTree::removeNode(Node* node, int roomNumber) {
	if (node == NULL) {
		return NULL;
	}
	if (roomNumber < node->data.roomNumber) {
		node->left = removeNode(node->left, roomNumber);
	}
	else if (roomNumber > node->data.roomNumber) {
		node->right = removeNode(node->right, roomNumber);
	}
	else {
		if (node->left == NULL) {
			Node* temp = node->right;
			delete node;
			return temp;
		}
		else if (node->right == NULL) {
			Node* temp = node->left;
			delete node;
			return temp;
		}
		Node* temp = node->right;
		while (temp->left != NULL) {
			temp = temp->left;
		}
		node->data = temp->data;
		node->right = removeNode(node->right, temp->data.roomNumber);
	}
	return node;
}