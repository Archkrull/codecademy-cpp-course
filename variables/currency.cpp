#include <iostream>

int main() {
  //variables
  double dollars, pesos, reais, soles;

  std::cout << "Enter number of Colombian Pesos:\n";
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian Reais:\n";
  std::cin >> reais;
  std::cout << "Enter number of Peruvian Soles:\n";
  std::cin >> soles;

//Conversion rates as of 2023-01-27
dollars = (0.00020 * pesos) + (0.196512 * reais) + (0.261699 * soles); 
  

  std::cout << "US Dollars = $ " << dollars << "\n";
}