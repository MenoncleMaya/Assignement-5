// Assignement 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include "Projection.h"
#include "Movie.h"
#include "MovieSelector.h"


int main()
{
    MovieSelector movieSelector;

    const int nbProjections = 5;
    const int nbSalle = 3;
    int choix = 0;
    int choixGenre = 0;
    string nom;
    string genre;
    int age = 0;

    Movie movie1, movie2, movie3, movie4, movie5;
    movie1.titre = "Matrix";
    movie1.genre = "Science-Fiction";
    movie1.acteur = "Keanu Reves";
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
        Projection("Matrix", 14.0, 16.3, 1),
        Projection("Star Wars", 15.3, 18.0, 2),
        Projection("Avengers", 18.0, 21.0, 1),
        Projection("Jurassic Park", 20.0, 22.3, 3),
        Projection("Titanic", 21.00f, 23.45f, 2)
    };

    cout << "Bonjour et Bienvenue au Cinema!\nPour commencer veuillez entrer votre age : ";
    cin >> age;
    cout << "\nQuel est votre type de film preferer?";
    cout << "\n1.Science-Fiction";
    cout << "\n2.Aventure";
    cout << "\n3.Romance";
    cin >> choixGenre;
    switch (choixGenre) {
        //Science-Fiction
    case 1: {
        genre = "Science-Fiction";
    }break;
        //Action
    case 2: {
        genre = "Aventure";
    }break;
        //Romance
    case 3: {
        genre = "Romance";
    }break;

    default:{}break;
    }


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