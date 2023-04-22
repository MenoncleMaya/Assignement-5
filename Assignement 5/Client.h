#pragma once
#include "Movie.h"
#include <iostream>
#include <list>
using namespace std;

class Client {
public:
	Client(string name, int id);
	void AddMovieWatched(Movie movie);
	string GetName();
	int GetID();
private:
	int id;
	string name;
	list<Movie> movieWatched;
};