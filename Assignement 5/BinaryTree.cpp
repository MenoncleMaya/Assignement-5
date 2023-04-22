

#include "BinaryTree.h"

//Constructeur par d�faut 
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

//Fonction pour ajouter une nouvelle salle de cin�ma 
void BinarySearchTree::addCinemaRoom(CinemaRoom data) {
	root = addNode(root, data);
}

//Fonction pour afficher les donn�es d'un Node 
void BinarySearchTree::displayNode(Node* node) {

}

