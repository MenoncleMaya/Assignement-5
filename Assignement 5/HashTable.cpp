#include "HashTable.h"

int HashTable::hash(int key)
{
	return key % size;
}

HashTable::HashTable(int s)
{
	size = s;
	table.resize(size);
}

void HashTable::insert(int key, int value)
{
	int index = hash(key);
	for (auto& kvp : table[index])
	{
		if (kvp.first == key)
		{
			kvp.second = value;
			return;
		}
	}
	table[index].push_back(make_pair(key, value));
}

int HashTable::get(int key)
{
	int index = hash(key);
	for (auto& kvp : table[index])
	{
		if (kvp.first == key)
		{
			return kvp.second;
		}
	}
	return -1; //Return -1 si la key n'est pas trouvé
}

void HashTable::remove(int key)
{
	int index = hash(key);
	for (auto it = table[index].begin(); it != table[index].end(); ++it)
	{
		if (it->first == key)
		{
			table[index].erase(it);
			return;
		}
	}
}