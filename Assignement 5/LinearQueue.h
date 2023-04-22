#pragma once
#include <iostream>

using namespace std;

#define MAX_SIZE 5 //Longueur max Queue

class Queue
{
	private :

	int front, rear;
	int arr[MAX_SIZE];

	public :

	Queue();

	bool isEmpty();

	bool isFull();

	void enqueue(int x);

	void dequeue();

	int peek();

	void display();
};