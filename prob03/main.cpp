// This program calculates a person's height in feet (') and inches (").

#include <iostream>

int main()
{
  int height;
  double inches;
  double official_height;

  //input the price of your total height
  std::cout << "please enter the person's height in inches:";
  std::cin >> height;

  // calculates the entered height
  official_height = height / 12;

// calculates the entered height if it does not divide perfectly by 12
  inches = height % 12;

  std::cout << "that person is:" << official_height << "\'" << inches << "\"";

}
