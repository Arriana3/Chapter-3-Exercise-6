/*project name: Chapter 3 Exercise 6
  Programmer: Arriana Maldonado
  Date: 2023-10-05
  Description: Asks the user the desired number of cookies and prints the amount of each 
  ingredients needed to make that many cookies. Each cookie requires 1.5 cups of 
  sugar, 1 cup of butter, and 2.75 cups of flour. The recipe produces 48 cookies.  
  All fractions should be expressed in decimal form.
  */
#include <iostream>
using namespace std;
int main()
{
    int Cookiesneeded;
    const double Sugar = 1.5;
    const double Butter = 1.0;
    const double Flour = 2.75;
    const int cookieRecipe = 48;

    cout << "Enter the number of cookies you want to make: ";
    cin >> Cookiesneeded;

    double sugarNeeded = (Sugar * Cookiesneeded) / cookieRecipe;
    double butterNeeded = (Butter * Cookiesneeded) / cookieRecipe;
    double flourNeeded = (Flour * Cookiesneeded) / cookieRecipe;

    cout << "To make " << Cookiesneeded << " cookies, you will need:\n";
    cout << sugarNeeded << " cups of sugar\n";
    cout << butterNeeded << " cups of butter\n";
    cout << flourNeeded << " cups of flour\n";

    return 0;
}

