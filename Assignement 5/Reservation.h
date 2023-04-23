#pragma once
#include "Client.h"
#include "Ticket.h"
#include <list>

class Reservation
{
public:
	Reservation();
	~Reservation();

	void AddTicket(Ticket ticket);
	void DisplayTicket();

private:
	double Total;
	list<Ticket> tickets;

};
