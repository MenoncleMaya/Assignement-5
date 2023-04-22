
#include "MovieSelector.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class MovieSelector {
	
private:

	vector<Movie> movieList;

public:
	

	//Fonction pour ajouter un Movie a la MovieList
	void addMovie(Movie movie) {
		movieList.push_back(movie);
	}

	//Fonction pour enlever un Movie de la MovieList en fonction du titre
	void removeMovie(string title) {
		for (int i = 0; i < movieList.size(); i++) {
			if (movieList[i].titre == title) {
				movieList.erase(movieList.begin() + i);
				break;
			}
		}
	}

	//Fonction pour afficher un Movie en fonction du titre
	void displayInfoMovie(string title) {
		for (int i = 0; i < movieList.size(); i++) {
			if (movieList[i].titre == title) {
				movieList[i].displayInfo();
			}
		}
	}

	//Fonction de recommendation en fonction du genre
	vector<Movie> recommendGenderMovie(string genre) {
		vector<Movie> tempList;
		for (int i = 0; movieList.size(); i++) {
			if (movieList[i].genre == genre) {
				tempList.push_back(movieList[i]);
			}
		}
		return tempList;
	}

	//Fonction de recommendation en fonction de l'acteur
	vector<Movie> recommendActorMovie(string acteur) {
		vector<Movie> tempList;
		for (int i = 0; movieList.size(); i++) {
			if (movieList[i].acteur == acteur) {
				tempList.push_back(movieList[i]);
			}
		}
		return tempList;
	}

	//Fonction de recommendation en fonction du realisateur
	vector<Movie> recommendRealisateurMovie(string realisateur) {
		vector<Movie> tempList;
		for (int i = 0; movieList.size(); i++) {
			if (movieList[i].realisateur == realisateur) {
				tempList.push_back(movieList[i]);
			}
		}
		return tempList;
	}

	//Fonction de recommendation en fonction de la durée
	vector<Movie> recommendDureeMovie(float duration) {
		vector<Movie> tempList;
		for (int i = 0; movieList.size(); i++) {
			if (movieList[i].duree <= duration) {
				tempList.push_back(movieList[i]);
			}
		}
		return tempList;
	}

	//Fonction de recommendation en fonction de la durée
	vector<Movie> recommendClassificationMovie(string classification) {
		vector<Movie> tempList;
		for (int i = 0; movieList.size(); i++) {
			if (movieList[i].classification == classification) {
				tempList.push_back(movieList[i]);
			}
		}
		return tempList;
	}
};