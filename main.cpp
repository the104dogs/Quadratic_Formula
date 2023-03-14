#include <iostream>
#include <cmath>

int main() {
  double a = 0;
  double b = 0;
  double c = 0;

std::cout << "Enter a:" << std::endl;
std::cin >> a;
std::cout << "Enter b:" << std::endl;
std::cin >> b;
std::cout << "Enter c:" << std::endl;
std::cin >> c;  


double root1 = 0;
double root2 = 0;

root1 = (-b - std::sqrt(b*b - 4*a*c)) / (2*a);
root2 = (b - std::sqrt(b*b - 4*a*c)) / (2*a);

std::cout << "root1 is: " << root1 << std::endl;
std::cout << "root2 is: " << root2 << std::endl;

}