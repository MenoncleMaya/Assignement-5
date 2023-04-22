#pragma once

#include "Movie.h"

class MovieSelector {


	void addMovie(Movie movie);
	void removeMovie(string title);
	void displayInfoMovie(string title);
	vector<Movie> recommendGenderMovie(string genre);
	vector<Movie> recommendActorMovie(string acteur);
	vector<Movie> recommendRealisateurMovie(string realisateur);
	vector<Movie> recommendDureeMovie(float duration);
	vector<Movie> recommendClassificationMovie(string classification);

};