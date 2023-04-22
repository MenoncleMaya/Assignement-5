#include "LinearQueue.h"

//Partly done with Dara's code

Queue::Queue()
{
	front = -1;
	rear = -1;
}

bool Queue::isEmpty()
{
	return (front == -1 && rear == -1);
}

bool Queue::isFull()
{
	return (rear == MAX_SIZE - 1);
}

void Queue::enqueue(int x)
{
	if (isFull())
	{
		cout << "Queue is full.\n";
		return;
	}

	if (isEmpty())
	{
		front = rear = 0;
	}
	else
	{
		rear++;
	}

	arr[rear] = x;
}

void Queue::dequeue()
{
	if (isEmpty())
	{
		cout << "Queue is empty.\n";
		return;
	}

	if (front == rear)
	{
		front = rear = -1;
	}
	else
	{
		front++;
	}
}

int Queue::peek()
{
	if (isEmpty())
	{
		cout << "Queue is empty.\n";
		return -1;
	}

	return arr[front];
}

void Queue::display()
{
	if (isEmpty())
	{
		cout << "Queue is empty.\n";
		return;
	}

	for (int i = front; i <= rear; i++)
	{
		cout << arr[i] << " ";
	}

	cout << "\n";
}