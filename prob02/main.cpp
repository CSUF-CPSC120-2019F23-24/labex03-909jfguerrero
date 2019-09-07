// This program calculates the amount of paint needed.

#include <iostream>

int main()
{
  // one gallon of paint covers 340 square feet
  int coverage = 340.0;
   int height = 6.0;
    int length = 100.0;


  // calculate how many gallons of paint it will take to cover
  // the area with 2 coats of paint
  double area=height*length*2.0;
    double gallons = area / coverage;

  std::cout << "It will take " << gallons << " gallons of paint./n";

  return 0;
}
