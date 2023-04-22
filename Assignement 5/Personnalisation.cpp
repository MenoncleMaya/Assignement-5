#include "Personnalisation.h"

Salle::Salle(bool RoomArray[10][10], bool defaultValue)
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
			if (RoomToPrint[i][y] != true)
			{
				cout << "0";
			}
			else
			{
				cout << "1";
			}
		}
		cout << "\n";
	}
}

void Salle::chooseSeat(bool RoomArray[10][10], int rows, int cols)
{
	if (!isTaken(RoomArray, rows, cols))
	{
		RoomArray[rows][cols] = true;
		cout << "Seat book successfuly!\n";
	}
}

bool Salle::isTaken(bool RoomArray[10][10], int row, int cols)
{
	if (RoomArray[row][cols] == true)
	{
		cout << "Seat not available!\n";
		return true;
	}
	else
	{
		return false;
	}
}

bool Salle::isFull(bool RoomArray[10][10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int y = 0; y < 10; y++)
		{
			if (RoomArray[i][y] == false)
			{
				return false;
			}
		}
	}
	return true;
}

bool Salle::isEmpty(bool RoomArray[10][10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int y = 0; y < 10; y++)
		{
			if (RoomArray[i][y] == true)
			{
				return false;
			}
		}
	}
	return true; 
}