#include "Client.h"

Client::Client(string name, int id) {
	this->name = name;
	this->id = id;
}
void Client::AddMovieWatched(Movie movie) {
	this->movieWatched.push_back(movie);
}
string Client::GetName() {
	return this->name;
}
int Client::GetID() {
	return this->id;
}