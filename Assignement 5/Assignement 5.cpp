// Assignement 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include "Projection.h"
#include "Movie.h"
#include "MovieSelector.h"
#include "Personnalisation.h"


int main()
{
    MovieSelector movieSelector;
    Salle salle1(false);
    bool arraySalle1[10][10];

    const int nbProjections = 5;
    const int nbSalle = 3;
    int choix = 0;

    Movie movie1, movie2, movie3, movie4, movie5;
    movie1.titre = "Matrix";
    movie1.genre = "Science-Fiction";
    movie1.acteur = "Keanu Reeves";
    movie1.realisateur = "Wachowski";
    movie1.duree = 136;
    movie1.classification = "+13";
    movie2.titre = "Star Wars";
    movie2.genre = "Science-Fiction";
    movie2.acteur = "Mark Hamill";
    movie2.realisateur = "George Lucas";
    movie2.duree = 105;
    movie2.classification = "+13";
    movie3.titre = "Avengers";
    movie3.genre = "Science-Fiction";
    movie3.acteur = "Robert Downey Jr.";
    movie3.realisateur = "Stan Lee";
    movie3.duree = 143;
    movie3.classification = "+13";
    movie4.titre = "Jurassic Park";
    movie4.genre = "Aventure";
    movie4.acteur = "Richard Attenborough";
    movie4.realisateur = "Steven Spielberg";
    movie4.duree = 127;
    movie4.classification = "+13";
    movie5.titre = "Titanic";
    movie5.genre = "Romance";
    movie5.acteur = "Leonardo DiCaprio";
    movie5.realisateur = "James Cameron";
    movie5.duree = 194;
    movie5.classification = "+8";
    


    Projection projectionsSalle1[nbProjections] = {
        Projection("Matrix", 14.00, 16.30, 1),
        Projection("Star Wars", 15.30, 18.00, 2),
        Projection("Avengers", 18.00, 21.00, 1),
        Projection("Jurassic Park", 20.00, 22.30, 3),
        Projection("Titanic", 21.00, 23.45, 2)
    };

    salle1.printRoom(arraySalle1);

    do {
        switch (choix) {

        case 1: {

        } break;

        case 2: {


        } break;

        case 3: {

        } break;

        case 4: {

        } break;

        case 5: {

        } break;

        case 6: {

        } break;

        default: {} break;
        }
    } while (choix != 0);
}