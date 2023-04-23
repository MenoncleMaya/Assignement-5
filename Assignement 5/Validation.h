#pragma once
#include <iostream>

using namespace std;

static class Validation
{
	public:

	static int inputValidation(int nbr);

	static int inputValidation(int nbr, int max, int min);

	static bool inputValidation(bool nbr);
};