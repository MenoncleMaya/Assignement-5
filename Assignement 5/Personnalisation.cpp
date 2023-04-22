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
	//Display cols
	SetTextColor(TextColor::YELLOW);
	cout << "/ ";
	SetTextColor(TextColor::WHITE);

	for (int j = 0; j < 10; j++)
	{
		cout << j << " ";
	}

	SetTextColor(TextColor::YELLOW);
	cout << "C\n";
	SetTextColor(TextColor::WHITE);

	for (int i = 0; i < 10; i++)
	{
		cout << i << " "; //Display rows
		for (int y = 0; y < 10; y++)
		{
			if (RoomToPrint[i][y] != true)
			{
				SetTextColor(TextColor::GREEN);
				cout << "0 ";
				SetTextColor(TextColor::WHITE);
			}
			else
			{
				SetTextColor(TextColor::RED);
				cout << "1 ";
				SetTextColor(TextColor::WHITE);
			}
		}
		cout << "\n";
	}

	SetTextColor(TextColor::YELLOW);
	cout << "R\n\n";
	SetTextColor(TextColor::WHITE);
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

float Salle::Pricing(bool RoomArray[10][10], float oldPrice)
{
	float newPrice{ 0 };

	if (isEmpty(RoomArray))
	{
		newPrice = oldPrice - (oldPrice * AJUSTEMENT);
	}
	else if (isFull(RoomArray)) //Useless, cant sell tickets if room is full
	{
		newPrice = (oldPrice * AJUSTEMENT) + oldPrice;
	}
	else if (seatAvailable(RoomArray) > 50)
	{
		newPrice = (oldPrice * (AJUSTEMENT/2)) + oldPrice;
	}
	else
	{
		newPrice = oldPrice - (oldPrice * (AJUSTEMENT/2));
	}

	return newPrice;
}

int Salle::seatAvailable(bool RoomArray[10][10])
{
	int seatTaken{ 0 };

	for (int i = 0; i < 10; i++)
	{
		for (int y = 0; y < 10; y++)
		{
			if (RoomArray[i][y] == true)
			{
				seatTaken++;
			}
		}
	}

	return seatTaken;
}

int Salle::SelectCol(bool RoomArray[10][10])
{
	int col;

	SetTextColor(TextColor::YELLOW);
	cout << "Column : ";
	SetTextColor(TextColor::WHITE);
	cin >> col;

	return col;
}

int Salle::SelectRow(bool RoomArray[10][10])
{
	int row;

	SetTextColor(TextColor::YELLOW);
	cout << "Rows : ";
	SetTextColor(TextColor::WHITE);
	cin >> row;

	return row;
}

void Salle::SelectSeats(bool RoomArray[10][10])
{
	bool isBuying{ true };
	cout << "\n-=-=- SELECT A SEAT -=-=-\n";
	
	while (isBuying && !isFull(RoomArray))
	{
		printRoom(RoomArray);

		chooseSeat(RoomArray, SelectRow(RoomArray), SelectCol(RoomArray));

		if (!isFull(RoomArray))
		{
			cout << "\nWould you like to buy another seat?\n";
			cout << "[1] Yes\n";
			cout << "[0] No\n";
			cout << "--> ";
			cin >> isBuying;
			cout << "\n";
		}

	}

}

void SetTextColor(TextColor color)
{
	cout << "\033[" << static_cast<int>(color) << "m";
}