

#include "Projection.h"


Projection::Projection(string film, float heureDebut, float heureFin, int salle) :
	film_(film), heureDebut_(heureDebut), heureFin_(heureFin), salle_(salle){}

Projection::~Projection() {}

string Projection::getFilm() {
	return film_;
}

float Projection::getHeureDebut() {
	return heureDebut_;
}

float Projection::getHeureFin() {
	return heureFin_;
}

int Projection::getSalle() {
	return salle_;
}