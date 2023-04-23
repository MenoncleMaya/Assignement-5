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
    bool room1[10][10];
    MovieSelector movieSelector;
    Salle salle(room1, false);
    room1[5][5] = true;
    vector<Movie> movieList;

    salle.SelectSeats(room1);
    salle.printRoom(room1);
    cout << salle.Pricing(room1, 10) << "$\n";
    cout << salle.seatAvailable(room1) << "\n";

    const int nbProjections = 5;
    const int nbSalle = 3;
    int choix = 0;
    int choixGenre = 0;
    int choixAdmin = 0;
    string nom;
    string genre;
    int age = 0;

    void Preferance(int age, string genre, vector<Movie> movieList, int choixGenre);
    void ChoixAdmin(int choixAdmin);

    Movie movie1, movie2, movie3, movie4, movie5;
    movie1.titre = "Matrix";
    movie1.genre = "Science-Fiction";
    movie1.acteur = "Keanu Reeves";
    movie1.realisateur = "Wachowski";
    movie1.duree = 136;
    movie1.classification = 13;
    movie2.titre = "Star Wars";
    movie2.genre = "Science-Fiction";
    movie2.acteur = "Mark Hamill";
    movie2.realisateur = "George Lucas";
    movie2.duree = 105;
    movie2.classification = 13;
    movie3.titre = "Avengers";
    movie3.genre = "Science-Fiction";
    movie3.acteur = "Robert Downey Jr.";
    movie3.realisateur = "Stan Lee";
    movie3.duree = 143;
    movie3.classification = 13;
    movie4.titre = "Jurassic Park";
    movie4.genre = "Aventure";
    movie4.acteur = "Richard Attenborough";
    movie4.realisateur = "Steven Spielberg";
    movie4.duree = 127;
    movie4.classification = 13;
    movie5.titre = "Titanic";
    movie5.genre = "Romance";
    movie5.acteur = "Leonardo DiCaprio";
    movie5.realisateur = "James Cameron";
    movie5.duree = 194;
    movie5.classification = 8;

    movieSelector.addMovie(movie1);
    movieSelector.addMovie(movie2);
    movieSelector.addMovie(movie3);
    movieSelector.addMovie(movie4);
    movieSelector.addMovie(movie5);

    movieList.push_back(movie1);
    movieList.push_back(movie2);
    movieList.push_back(movie3);
    movieList.push_back(movie4);
    movieList.push_back(movie5);

    
    Projection projectionsSalle1[nbProjections] = {
        Projection("Matrix", 14.0, 16.3, 1),
        Projection("Star Wars", 15.3, 18.0, 2),
        Projection("Avengers", 18.0, 21.0, 1),
        Projection("Jurassic Park", 20.0, 22.3, 3),
        Projection("Titanic", 21.00f, 23.45f, 2)
    };

    ChoixAdmin(choixAdmin);
    Preferance(age,genre,movieList,choixGenre);



    

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

void Preferance(int age, string genre, vector<Movie> movieList, int choixGenre) {
    cout << "Bonjour et Bienvenue au Cinema!\nPour commencer veuillez entrer votre age : ";
    cin >> age;
    cout << "\nQuel est votre type de film preferer?";
    cout << "\n1.Science-Fiction";
    cout << "\n2.Aventure";
    cout << "\n3.Romance\n";
    cin >> choixGenre;
    switch (choixGenre) {
        //Science-Fiction
    case 1: {
        genre = "Science-Fiction";
        cout << "\nVous les films que vous l'on vous suggere :\n\n";
        for (int i = 0; i < movieList.size(); i++) {
            if (age >= movieList[i].classification && genre == movieList[i].genre) {
                movieList[i].displayInfo();
                cout << endl;
            }
        }
        cout << "\nEt voici le reste des films que l'on vous suggere :\n\n";
        for (int i = 0; i < movieList.size(); i++) {
            if (age >= movieList[i].classification && genre != movieList[i].genre) {
                movieList[i].displayInfo();
                cout << endl;
            }
        }
    }break;
        //Action
    case 2: {
        genre = "Aventure";
        cout << "\nVous les films que vous le droit de regarder :\n\n";
        for (int i = 0; i < movieList.size(); i++) {
            if (age >= movieList[i].classification && genre == movieList[i].genre) {
                movieList[i].displayInfo();
                cout << endl;
            }
        }
        cout << "\nEt voici le reste des films que l'on vous suggere :\n\n";
        for (int i = 0; i < movieList.size(); i++) {
            if (age >= movieList[i].classification && genre != movieList[i].genre) {
                movieList[i].displayInfo();
                cout << endl;
            }
        }
    }break;
        //Romance
    case 3: {
        genre = "Romance";
        cout << "\nVous les films que vous le droit de regarder :\n\n";
        for (int i = 0; i < movieList.size(); i++) {
            if (age >= movieList[i].classification && genre == movieList[i].genre) {
                movieList[i].displayInfo();
                cout << endl;
            }
        }
        cout << "\nEt voici le reste des films que l'on vous suggere :\n\n";
        for (int i = 0; i < movieList.size(); i++) {
            if (age >= movieList[i].classification && genre != movieList[i].genre) {
                movieList[i].displayInfo();
                cout << endl;
            }
        }
    }break;

    default: {}break;
    }
}

void ChoixAdmin(int choixAdmin) {
    int numEmployer = 69420;
    int mpEmployer = 69420;
    int entrerNum = 0;
    int entrerMP = 0;
    cout << "Bonjour et Bienvenue au cinema! \nVeuillez vous identifier :";
    cout << "\n1. Client";
    cout << "\n2. Employer\n";
    cin >> choixAdmin;
    switch (choixAdmin) {
    case 1: {
        break;
    }break;
    case 2: {
        
        cout << "\n\nVeuillez entrer votre num d'employer : ";
        cin >> entrerNum;
        if (entrerNum == numEmployer) {


        }
        else {

        }
    }break;
    }
}