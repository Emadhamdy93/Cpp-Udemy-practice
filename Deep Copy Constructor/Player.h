#pragma once
#include <iostream>
using std::string;
class Player{
private:
	string name;
	float hp;
	float xp;
public:
	Player();
	Player(string name, float hp, float xp);
	Player(const Player &source);
	void setName(string name);
	string getName();

	void setHP(float hp);
	float getHP();


};

