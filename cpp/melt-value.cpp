#include <iostream> //standard library for i/o
#include <string> //always include when using string class
using namespace std;

int main() {
  /****HEADER*******************************************************
  Allison Cerna
  Due Date: 08-30-2024
  Course: C0P3014
  Assignment: Program 1
  Professor: Sorgente
  Description: This program calculates the MELT value of coins based on their silver content.
  *************************************************************/

// Variables to store user input and calculated values
  double silverPrice;
  double totalMeltValue = 0.0; 
  string userResponse = "y";
  string name;

  double nickelTotal = 0.0, dimeTotal = 0.0, quarterTotal = 0.0;

//Welcome Message I hope it's okay I added a fantasy element :)
cout << "Welcome Mortal! Enter your first name...if you dare: ";
cin >> name;
cout << "Now enter the current price of silver per ounce: ";
cin >> silverPrice;

// Greet the user & get the price of silver
  cout << "Thank you, " << name << ". All calculations will be based on $" << silverPrice << " per ounce of silver.\n" << endl;
  
// Loop to handle multiple coin entries
  do {
      int dollarValue, year;
      double coinValue = 0.0;
  
//set the number of decimal places for doubles
cout.setf(ios::fixed);  
cout.setf(ios::showpoint); 
cout.precision(2); //use any number for the number of decimal places
  

// Ask and get dollar value and year of the coin
      cout << "Enter the coin value (5 for nickel, 10 for dime, 25 for quarter): ";
      cin >> dollarValue;
      cout << "Enter the coin year: ";
      cin >> year;


// Loop For Conditional checks to calculate MELT/ User Interaction
  if (dollarValue == 5) { // Nickel
      if (year >= 1942 && year <= 1945) {
          coinValue = 0.0563 * silverPrice;
      } else if (year < 1942) {
          coinValue = 0.09;
      } else {
          coinValue = 0.05;
      }
      nickelTotal += coinValue;
      cout << "The value of that nickel would be: $" << coinValue << endl;
      cout << "Cha-ching! The current total of the nickels entered is: $" << nickelTotal << endl;
     cout << "\n";
  } else if (dollarValue == 10) { // Dime
      if (year >= 1892 && year <= 1964) {
          coinValue = 0.0723 * silverPrice;
      } else if (year < 1892) {
          coinValue = 0.20;
      } else {
          coinValue = 0.10;
      }
      dimeTotal += coinValue;
      cout << "The value of that dime would be: $" << coinValue << endl;
      cout << "Cha-ching! The current total of dimes entered is: $" << dimeTotal << endl;
     cout << "\n";
  } else if (dollarValue == 25) { // Quarter
      if (year >= 1892 && year <= 1964) {
          coinValue = 0.1808 * silverPrice;
      } else if (year < 1892) {
          coinValue = 0.50;
      } else if (year != 1931) { // Quarters from 1931 have no value
          coinValue = 0.25;
      }
      quarterTotal += coinValue;
      cout << "The value of that quarter would be: $" << coinValue << endl;
     cout << "\n";
      cout << "Cha-ching! The current total of quarters entered is: $" << quarterTotal << endl;
  } else {
      cout << "Uh-oh! Looks like you tried to use a magic bean instead of a real coin. Let's stick to nickels, dimes, and quarters!" << endl;
  }

// Ask user if they want to enter another coin
          cout << name << ", Would you like to enter another coin into the wishing well? (Y or N): ";
          cin >> userResponse;

      } while (userResponse != "n" && userResponse != "N");

// Final Results...Yay
  cout << "\n";
      totalMeltValue = nickelTotal + dimeTotal + quarterTotal;
      cout << "The total value of nickels entered: $" << nickelTotal << endl;
      cout << "The total value of dimes entered: $" << dimeTotal << endl;
      cout << "The total value of quarters entered: $" << quarterTotal << endl;
      cout << "Cha-ching! The total MELT value of your coins are: $" << totalMeltValue << endl;
      cout << "May your treasure chest always overflow with silver!" << endl;
return 0;
}