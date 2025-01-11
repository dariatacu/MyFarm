#pragma once
#include <iostream>
#include <utility> 
#include <vector>
#include <map>
class shop
{
public:
	shop(); // constructor
protected:
	// grau - 1, porumb - 2, soia - 5, morcovi - 10, rosii - 15, cartofi - 20
	std::vector<std::pair<std::string, int>> plante = { {"grau", 1}, {"porumb", 2},  {"soia", 5}, 
	 {"morcovi", 10},  {"rosii", 15},  {"cartofi", 20} };
};

