#pragma once

#include <string>

using namespace std;

class Projection {

public:
	Projection(string film, float heureDebut, float heureFin, int salle);

	~Projection();

	string getFilm();
	float getHeureDebut();
	float getHeureFin();
	int getSalle();

	struct Film {
		string film;
		float heureDebut;
		float heureFin;
		int salle;
	};

private:
	string film_;
	float heureDebut_;
	float heureFin_;
	int salle_;
};