#pragma once

#include <iostream>
#include <vector>
#include <list>

using namespace std;

class HashTable
{
	private:
		vector<list<pair<int, int>>> table;
		int size;

		int hash(int key);

	public:
		HashTable(int s);

		void insert(int key, int value);

		int get(int key);

		void remove(int key);

};