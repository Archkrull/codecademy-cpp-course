#include <iostream>
#include <cmath>

int main() {
  //variables for a, b, and c
  double a, b, c;

  //Variables for root 1 and 2
  double root1, root2;
  
  // output and input for a, b, and c
  std::cout << "Enter a:\n";
  std::cin >> a;

  std::cout << "Enter b:\n";
  std::cin >> b;

  std::cout << "Enter c:\n";
  std::cin >> c;


//equations for the positive and negative roots
  root1 = (-b + std::sqrt(b*b - 4*a*c)) / (2*a);
  root2 = (-b - std::sqrt(b*b - 4*a*c))  /(2*a);

//output of calculation
  std::cout << "Root 1 is " << root1 << "\n";
  std::cout << "Root 2 is " << root2 << "\n";
}