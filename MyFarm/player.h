#pragma once
#include <iostream>
#include <utility> 
#include <vector>
#include <map>
class player
{
public:
	player();
	void get_xp(int xp);
protected:
	std::map<std::string, int> inventar;
	int lvl = 1;
	int exp = 0;
	std::vector<int> lvl_experince_needed = { 0, 20, 100, 500, 1200, 2000, 3000, 4500, 6500, 10000};

};

