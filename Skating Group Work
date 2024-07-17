// Write a prgram about roller skating that Welcomes the user, Ask if rent or not? if yes charge $5 How many people? If less than 3, charge $10 per person for groups more than 3, contact the manager. Display a total to pay. //

#include <stdio.h>
#include <string.h>

int main() {
  int num_people = 0;
  int total_cost = 0;
  char userResponse [5] = "No";

  //Welcome the user
  printf("Welcome to the Roller Rink!\n");

  //ask if they want to rent
  printf("Would you like to rent skates? (Yes/No)\n");
scanf("%s", userResponse);
  
if(strcmp(userResponse, "Yes") == 0 || strcmp(userResponse, "yes") == 0) {
  total_cost += 5;  
} else
{
  total_cost = 0;
}


  //ask how many people
  printf("How many people are in your party?\n");
    scanf("%d", &num_people);
  if(num_people < 3)
  {
    total_cost += num_people * 10;
    printf("For %d people, the total cost is $%d\n", num_people, total_cost);
  } else
  {
    printf("Please contact the manager.\n");
  }

if (total_cost > 0) {
  printf("The total amount to pay is $%d\n", total_cost);
} else if (total_cost == 0) {  
  printf("No charge applied. Please contact the manager.\n");
} else {  
  printf("Thank you for visiting the Roller Rink!\n");
}

return 0;
}
