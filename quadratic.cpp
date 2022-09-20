#include <iostream>
#include <cmath>

int main() {
  //initialize
  double a,b,c;
  
  //get a from user
  std::cout << "Enter a: ";
  std::cin >> a;
  
  //get b from user
  std::cout << "Enter b: ";
  std::cin >> b;
  
  //get c from user
  std::cout << "Enter c: ";
  std::cin >> c;

  //declare two variables to store the roots
  double root1;
  double root2;
  
  //calulate the quadratic formulas
  root1 = (-b + std::sqrt((b*b) - (4*a*c))) / (2*a);
  root2 = (-b - std::sqrt((b*b) - (4*a*c))) / (2*a);

  //output the results
  std::cout << "Root 1 is: " << root1 << "\n";
  std::cout << "Root 2 is: " << root2;
}
