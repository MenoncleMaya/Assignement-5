#include "Validation.h"

int Validation::inputValidation(int nbr)
{
	while (cin.fail() || cin.peek() != '\n')
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << "Nombre non valide, veuillez recommencer.\n";
		cout << "--> ";
		cin >> nbr;
	}

	return nbr;
}


int Validation::inputValidation(int nbr, int max, int min)
{

	while (cin.fail() || cin.peek() != '\n' || nbr > max || nbr < min)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << "Nombre non valide, veuillez recommencer.\n";
		cout << "--> ";
		cin >> nbr;
	}

	return nbr;
}