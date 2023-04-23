#include "Reservation.h"

Reservation::Reservation(){}
Reservation::~Reservation(){}

void Reservation::AddTicket(Ticket ticket) {
	this->tickets.push_back(ticket);
}

void Reservation::DisplayTicket() {
	for each (Ticket t in tickets)
	{
		cout << t.movie << " seats : " << t.SeatCol << " " << t.SeatRow << endl << "Room: " << t.salle << endl << "price: " << t.price << endl;
	}
}