#include "Personnalisation.h"

Salle::Salle(bool defaultValue)
{
	for (int i = 0; i < 10; i++)
	{
		for (int y = 0; y < 10; y++)
		{
			RoomArray[i][y] = defaultValue;
		}
	}
}

void Salle::printRoom(bool RoomToPrint[10][10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int y = 0; y < 10; y++)
		{
			cout << RoomToPrint[i][y];
		}
	}
}

void Salle::chooseSeat(bool RoomArray[10][10], int rows, int cols)
{
	for (int i = 0; i < 10; i++)
	{
		for (int y = 0; y < 10; y++)
		{
			if (!isTaken(RoomArray, i, y));
			{
				RoomArray[i][y] = true;
				cout << "Seat book successfully!\n";
			}
		}
	}
}

bool Salle::isTaken(bool RoomArray[10][10], int row, int cols)
{
	if (RoomArray[row][cols] == false)
	{
		cout << "Seat is available\n";
		return false;
	}
	else
	{
		cout << "Seat is already taken.\n";
		return true;
	}
}