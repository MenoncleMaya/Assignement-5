#pragma once
#include <iostream>
#include "Personnalisation.h"

class Ticket {
public:
	Ticket(string movie, string salle, int row, int col, float price);
	string movie;
	string salle;
	int SeatRow;
	int SeatCol;
	float price;
};
