#include "Ticket.h"

Ticket::Ticket(string movie, string salle, int row, int col, float price) {
	this->movie = movie;
	this->salle = salle;
	this->SeatRow = row;
	this->SeatCol = col;
	this->price = price;
}