// Author: Gavin R Lafferty
// Github:
// December 11, 2020
// CSIS 113A

#include <iostream>
#include "player.h"

int main() {

  // Create the default constructor
  Player player_information;

  // Define a string to be assigned to the output of the
  // get_name function of the Player class.
  std::cout << "Enter the name for your player: ";
  // Player_name is passed by reference.
  std::string player_name = player_information.get_name(&player_name);

  // Call the set_player function and pass it an integer and
  // the string from the get_name function
  player_information.set_player(0.750, &player_name);
  // Output the results to the user
  std::cout << "\nThe average for "
            << player_name << " is "
            << player_information.get_average() << std::endl;


  return 0;
}
