#pragma once
#include <vector>
#include <iostream>
#inlcude "Personnalisation.h"
class Room {
private:
	string name;
	vector<Salle> salle; 
public:
	Room(string name);

	void AddSalle(Salle salle);
};