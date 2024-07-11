#include <stdio.h>
#include <string.h>

int main(void) {
  int b, f;
  char u;
  char c[15];

  printf("Please provide name of community\n");
  scanf(" %s", c);

  if (strcmp(c, "COP1220") == 0) {
    printf("Welcome to community: COP1220\n");
    printf("Do you want to see the unit numbers? (y/n)\n");
    char userResponse;
    scanf(" %c", &userResponse);
    switch (userResponse) {
    case 'y':
      for (b = 1; b <= 5; b++) {
        for (f = 1; f <= 3; f++) {
          for (u = 'A'; u <= 'D'; u++) {
            printf("%d%d%c\n", b, f, u);
          }
        }
      }
      break; // Added break to prevent fall-through
    case 'n':
      printf("Okay, goodbye\n");
      break;
    }
  } else if (strcmp(c, "PBSC") == 0) {
    printf("Welcome to community: PBSC\n");
    printf("Do you want to see the unit numbers? (y/n)\n");
    char userResponse;
    scanf(" %c", &userResponse);
    switch (userResponse) {
    case 'y':
      for (b = 1; b <= 10; b++) {
        for (f = 1; f <= 2; f++) {
          for (u = 'A'; u <= 'H'; u++) {
            printf("%d%d%c\n", b, f, u);
          }
        }
      }
      break; // Added break to prevent fall-through
    case 'n':
      printf("Okay, goodbye\n");
      break;
    }
  } else {
    printf("We do not have information about this community\n");
  }

  return 0;
}
