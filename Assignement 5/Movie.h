#pragma once

#include <string>
#include <iostream>

using namespace std;

class Movie {
public:

	string titre;
	string genre;
	string acteur;
	string realisateur;
	int duree;
	int classification;

	void displayInfo()
	{
		cout << "Titre : " << titre << endl;
		cout << "Genre : " << genre << endl;
		cout << "Acteur Principal : " << acteur << endl;
		cout << "Realisateur : " << realisateur << endl;
		cout << "Duree du film : " << duree << " minutes" << endl;
		cout << "Classification : " << classification << " ans et plus " << endl;
	}

};