#pragma once

#include <iostream>
#include <fstream>

using namespace std;

struct CinemaRoom {
	int roomNumber;
	string movieTitle;
};

class BinarySearchTree {
private : 
	struct Node {
		CinemaRoom data;
		Node* left;
		Node* right;
		Node* next;
	};

	Node* root;

	Node* addNode(Node* node, CinemaRoom data);

	void displayNode(Node* node);

	void inOrderTraversal(Node* node);

	Node* removeNode(Node* node, int roomNumber);

public:
	BinarySearchTree();

	void addCinemaRoom(CinemaRoom data);

	void displayAllCinemaRooms();

	Node* searchCinemaRoom(int roomNumber);

	void removeCinemaRoom(int roomNumber);
};