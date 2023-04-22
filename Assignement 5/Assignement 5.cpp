// Assignement 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Projection.h"


int main()
{
    const int nbProjections = 5;
    const int nbSalle = 3;
    int choix = 0;


    Projection projectionsSalle1[nbProjections] = {
        Projection("Matrix", 14.00, 16.30, 1),
        Projection("Star Wars", 15.30, 18.00, 2),
        Projection("Avengers", 18.00, 21.00, 1),
        Projection("Jurassic Park", 20.00, 22.30, 3),
        Projection("Titanic", 21.00, 23.45, 2)
    };

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