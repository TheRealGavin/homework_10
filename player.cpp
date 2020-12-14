// Author: Gavin R Lafferty
// Github:
// December 11, 2020
// CSIS 113A

#include "player.h"
#include <iostream>
#include <string>

// The default constructor is defined and the string
// and average variables are initialized
Player::Player()
  :Player((std::string &) "",0.0){}


// A second constructor is defined that is passed all
// possible parameters. The constructor uses the set_player
// function and passes both variables
Player::Player(std::string &name, double average)
{
  this->set_player(average, &name);
}


// This constructor is passed a string, then calls the working constructor
// and is passed 0.0 for the average
Player::Player(std::string &name){
  this->set_player(0.0, &name);
}


// Define the set_player function using the scope resolution
// operator for the Player class. This function simply
// assigns the passed double and string to themselves
void Player::set_player(double average, std::string *name){
  this->average = average;
  this->name = reinterpret_cast<const char *>(&name);
}


// Define the get_average function using the scope resolution
// operator for the Player class. This function returns the double
// that is passed through it
double Player::get_average(){
  return this->average;
}


// Define the get_name function using the scope resolution
// operator for the Player class. This function uses the getline
// function to fill a string, then returning said string
std::string Player::get_name(std::string *player_name) {
  std::getline(std::cin, *player_name);

  return *player_name;
}
