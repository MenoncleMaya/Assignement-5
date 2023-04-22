#include "Pile.h"

Pile::Pile() 
{ // constructor to initialize the pile
    top = -1;
}

bool Pile::is_empty() { // check if the pile is empty
    return (top == -1);
}

bool Pile::is_full() { // check if the pile is full
    return (top == MAX_SIZE - 1);
}

void Pile::push(Reservation value) { // add an element to the top of the pile
    if (is_full()) {
        cout << "Pile is full\n";
        return;
    }
    top++;
    arr[top] = value;
}

void Pile::pop() { // remove the top element from the pile
    if (is_empty()) {
        cout << "Pile is empty\n";
        return;
    }
    top--;
}

Reservation Pile::peek() { // return the top element of the pile
    if (is_empty()) {
        cout << "Pile is empty\n";
        //return NULL; //DO NOT FORGET <---
    }
    return arr[top];
}