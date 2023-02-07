#include <iostream>
#include <stdlib.h>

// A more advanced version of Rock, Paper Scissors with the additional options of Lizard and Spock. 

int main() {

srand (time(NULL));

int computer = rand() % 5 + 1;

int user = 0;

std::cout << "========================\n";
std::cout << "Rock Paper Scissors, advanced version!\n";
std::cout << "========================\n";

std::cout << "1) Rock\n";
std::cout << "2) Paper\n";
std::cout << "3) Scissors\n";
std::cout << "4) Lizard\n";
std::cout << "5) Spock\n";

std::cout << "Enter your choice as a number!\n";

std::cin >> user;

if (computer == user) {

  std::cout << "You have chosen the same, redo!\n";

//scenario where user wins
} else if (
  // Scissors cuts paper
  user == 3 && computer == 2 ||
  // Paper covers rock
  user == 2 && computer == 1 ||
  //Rock crushes lizard
  user == 1 && computer == 4 ||
  // Lizard poisons Spock
  user == 4 && computer == 5 ||
  // Spock smashes scissors
  user == 5 && computer == 3 ||
  //Scissors decapitates lizard
  user == 3 && computer == 4 ||
  // Lizard eats paper
  user == 4 && computer == 2 ||
  // Paper disproves Spock.
  user == 5 && computer == 1 ||
  //Spock vaporizes rock.
  user == 5 && computer == 1 ||
  //Rock crushes scissors
  user == 1 && computer == 3 ) {

std::cout << "You win!\n";

// scenario where computer wins
} else if (
   // Scissors cuts paper
  computer == 3 && user == 2 ||
  // Paper covers rock
  computer == 2 && user == 1 ||
  //Rock crushes lizard
  computer == 1 && user == 4 ||
  // Lizard poisons Spock
  computer == 4 && user == 5 ||
  // Spock smashes scissors
  computer == 5 && user == 3 ||
  //Scissors decapitates lizard
  computer == 3 && user == 4 ||
  // Lizard eats paper
  computer == 4 && user == 2 ||
  // Paper disproves Spock
  computer == 5 && user == 1 ||
  //Spock vaporizes rock
  computer == 5 && user == 1 ||
  //Rock crushes scissors
  computer == 1 && user == 3
) {

std::cout << "You lose!\n";

} else {

  std::cout << "Invalid Input, please enter answer as a number!\n";

}

return 0;
}