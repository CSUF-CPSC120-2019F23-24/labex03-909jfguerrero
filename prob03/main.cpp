// This program calculates a person's height in feet (') and inches (").
// This program calculates the amount of paint needed.

#include <iostream>

int main()
{
  double inches, feet, height;
  // get height in feet
  std::cout << "what is the height in feet?";
  std::cin >> feet;

  //calculate feet to inches
  inches = feet * 12;

  //display the inches
  std::cout << "The height in \"inches\" is " << inches << '\n';

  //get the height in inches
  std::cout << "what is the height in inches?";
  std::cin >> inches;

  //calculate inches to feet
  feet = inches /12;

  //display the feet
  std::cout << "The height in \"feet\" is " << feet << '\n';


  return 0;
}
