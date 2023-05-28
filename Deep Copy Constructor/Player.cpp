#include "Player.h"
void Player::setName(string name) {
	this->name = name;
}
string Player::getName()
{
	return name;
}
float Player::getHP() { return hp; }
void Player::setHP(float hp) { this->hp = hp; }
Player::Player() :name{ "nun" }, hp{ 3 }, xp{ 0 } {

}
Player::Player(const Player& source) :name( source.name ), hp{ source.hp }, xp{ source.hp } {

}
Player::Player(string name,float hp,float xp) :name{ name }, hp{ hp }, xp{ xp} {

}