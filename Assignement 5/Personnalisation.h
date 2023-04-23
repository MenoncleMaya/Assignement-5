#pragma once

#include <iostream>
#include "Validation.h"
#include "Projection.h"

using namespace std;

class Salle
{
	private:
		Projection proj;
	float const AJUSTEMENT{ 0.5 };

	public:	

	Salle(bool RoomArray[10][10], bool defaultValue, Projection proj);

	void printRoom(bool RoomArray[10][10]);

	void chooseSeat(bool RoomArray[10][10], int row, int col);

	bool isTaken(bool RoomArray[10][10], int row, int col);

	bool isFull(bool RoomArray[10][10]);

	bool isEmpty(bool RoomArray[10][10]);

	float Pricing(bool RoomArray[10][10], float oldPrice);

	int seatAvailable(bool RoomArray[10][10]);

	int SelectCol(bool RoomArray[10][10]);

	int SelectRow(bool RoomArray[10][10]);

	void SelectSeats(bool RoomArray[10][10]);

};

enum class TextColor
{
	RED = 31,
	GREEN = 32,
	WHITE = 37,
	MAGENTA = 35,
	YELLOW = 33
};

void SetTextColor(TextColor color);
