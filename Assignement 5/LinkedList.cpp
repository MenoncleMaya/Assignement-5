#include "LinkedList.h"

Node::Node(int data)
{
	this->data = data;
	this->next = next;
}

LinkedList::LinkedList()
{
	head = NULL;
}

void LinkedList::insert(int data)
{
	Node* new_node = new Node(data);
	if (head == NULL)
	{
		head = new_node;
	}
	else
	{
		Node* temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
}

void LinkedList::remove(int data)
{
	Node* temp = head;
	Node* prev = NULL;
	while (temp != NULL && temp->data != data)
	{
		prev = temp;
		temp = temp->next;
	}
	if (temp == NULL)
	{
		return;
	}
	if (prev == NULL)
	{
		head = temp->next;
	}
	else
	{
		prev->next = temp->next;
	}
	delete temp;
}

void LinkedList::display()
{
	Node* temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << "\n";
}

void LinkedList::insertInFront(int data)
{
	Node* new_node = new Node(data);
	if (head == NULL)
	{
		head = new_node;
	}
	else
	{
		new_node->next = head;
		head = new_node;
	}
}

void LinkedList::insertAtPosition(int data, int position)
{
	Node* new_node = new Node(data);

	if (head == NULL)
	{
		head = new_node;
	}
	else
	{
		Node* temp = head;
		Node* prev = NULL;
		int count{ 0 };

		while (temp != NULL && count < position)
		{
			prev = temp;
			temp = temp->next;
			count++;
		}

		if (prev == NULL)
		{
			new_node->next = head;
			head = new_node;
		}
		else
		{
			prev->next = new_node;
			new_node->next = temp;
		}
	}
}


Node* LinkedList::getNodeAtPosition(int position)
{
	Node* temp = head;
	int count{ 0 };

	while (temp != NULL && count < position)
	{
		temp = temp->next;
		count++;
	}

	return temp;
}

int LinkedList::getLength()
{
	Node* temp = head;
	int count{ 0 };

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}

	return count;
}

void LinkedList::clear()
{
	Node* temp = head;

	while (temp != NULL)
	{
		Node* next = temp->next;
		delete temp;
		temp = next;
	}

	head = NULL;
}