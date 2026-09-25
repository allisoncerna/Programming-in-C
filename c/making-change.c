#include <stdio.h>
#include <string.h>

int main(void) {

  char disStore[20] = "Publix";
  char storeName[20];
  float amountSpent = 0.0;
  float amountGiven = 0.0;
  float change = 0.0;
  
  printf("What is the name of the store you are shopping at?\n");
  scanf("%s", storeName);

  if(strcmp(disStore, storeName) == 0 || strcmp(disStore, "publix") == 0)
  {
    printf("This store offers 10 cents cash back on every purchase\n");
  }
  else
  {
    printf("Sorry, we do not offer cash back at this store\n");
  }

  printf("How much did you spend?\n");
  scanf("%f", &amountSpent);
 
  // Prompt user for the amount given
  printf("How much did you give?\n");
  scanf("%f", &amountGiven);

  // Calculate the initial change
  change = amountGiven - amountSpent;

  // Check if the user is shopping at Publix
  if (strcmp(storeName, "Publix") == 0) {
      change += 0.10; // Add 10 cents to the change
  }

  printf("Change after shopping at %s: $%.2f\n", storeName, change);

      printf("\n");

      return 0;
  }
