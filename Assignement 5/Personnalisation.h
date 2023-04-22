#pragma once

#include <iostream>

using namespace std;

class Salle
{
	public:	

	bool RoomArray[10][10];

	Salle(bool defaultValue);

	void printRoom(bool RoomArray[10][10]);

	void chooseSeat(bool RoomArray[10][10], int row, int col);

	bool isTaken(bool RoomArray[10][10], int row, int col);
};