#include <iostream>
#include <cstdlib>

int main() {

  std::cout << "MAGIC 8-BALL:\n";

//creates a random number between 1-20 and resets
  srand(time(NULL));
  int answer = std::rand()  % 20;

if (answer == 0) {
  std::cout <<"It is certain\n";
} else if (answer == 1) {
  std::cout <<"It is decidedly so\n";
}
else if (answer == 2) {
  std::cout <<"It is decidedly so\n";
}
else if (answer == 3) {
  std::cout <<"Without a doubt\n";
}
else if (answer == 4) {
  std::cout <<"Yes - definitely\n";
}
else if (answer == 5) {
  std::cout <<"You may rely on it\n";
}
else if (answer == 6) {
  std::cout <<"As I see it, yes\n";
}
else if (answer == 7) {
  std::cout <<"Most likely\n";
}
else if (answer == 8) {
  std::cout <<"Outlook good\n";
}
else if (answer == 9) {
  std::cout <<"Yes\n";
}
else if (answer == 10) {
  std::cout <<"Signs point to yes\n";
}
else if (answer == 11) {
  std::cout <<"Reply hazy, try again\n";
}
else if (answer == 12) {
  std::cout <<"Ask again later\n";
}
else if (answer == 13) {
  std::cout <<"Better not tell you now\n";
}
else if (answer == 14) {
  std::cout <<"Cannot predict now\n";
}
else if (answer == 15) {
  std::cout <<"Concentrate and ask again\n";
}
else if (answer == 16) {
  std::cout <<"Don't count on it\n";
}
else if (answer == 17) {
  std::cout <<"My reply is no\n";
}
else if (answer == 18) {
  std::cout <<"My sources say no\n";
}
else if (answer == 19) {
  std::cout <<"Outlook not so good\n";
}
else {
  std::cout <<"Very doubtful\n";
}
  return 0;
}