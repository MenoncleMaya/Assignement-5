#pragma once
#include <iostream>
using namespace std;

class Node
{
	public:

	int data;
	Node* next;

	Node(int data);
};

class LinkedList
{
	private:

	Node* head;

	public:

	LinkedList();
	
	void insert(int data);
	
	void remove(int data);
	
	void display();
	
	void insertInFront(int data);
	
	void insertAtPosition(int data, int position);
	
	Node* getNodeAtPosition(int position);

	int getLength();

	void clear();
};