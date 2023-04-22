#pragma once

#include <iostream>

using namespace std;

class Salle
{
	public:	

	Salle(bool RoomArray[10][10], bool defaultValue);

	void printRoom(bool RoomArray[10][10]);

	void chooseSeat(bool RoomArray[10][10], int row, int col);

	bool isTaken(bool RoomArray[10][10], int row, int col);

	bool isFull(bool RoomArray[10][10]);

	bool isEmpty(bool RoomArray[10][10]);
};