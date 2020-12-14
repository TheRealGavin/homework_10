// Author: Gavin R Lafferty
// Github:
// December 11, 2020
// CSIS 113A

#include <iostream>
#include <string>

#ifndef HOMEWORK_10__PLAYER_H_
#define HOMEWORK_10__PLAYER_H_

class Player{
 private:
  std::string name;
  double average;

 public:
  Player();


  Player(std::string &name, double average);


  Player(std::string &name);


  void set_player(double average, std::string *name);


  double get_average();

  std::string get_name(std::string *player_name);
};

#endif//HOMEWORK_10__PLAYER_H_
