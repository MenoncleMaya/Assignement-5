#pragma once
#include <iostream>

using namespace std;

class Node
{
	public:

	int value;
	int height;
	Node* left;
	Node* right;

	Node(int value);
};

class AVLTree
{
	public:

	AVLTree();

	Node* insert(Node* node, int value);

	Node* remove(Node* node, int value);

	Node* search(Node* node, int value);

	void inOrderSearch(Node* node);

	void preOrderSearch(Node* node);

	void postOrderSearch(Node* node);

	int height(Node* node);

	int balanceFactor(Node* node);

	Node* rotateRight(Node* node);

	Node* rotateLeft(Node* node);

	Node* getMinValueNode(Node* node);

	int getBalance(Node* node);

	Node* root;
};