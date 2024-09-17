#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function to remove non-alpha characters 
void removeNonAlpha(char* input, char* output) {
    int j = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        if (isalpha(input[i])) {
            output[j] = input[i];
            j++;
        }
    }
    output[j] = '\0'; // Null-terminate the output string
}

int main() {
    char input[31];  // Array to store user input (up to 30 characters + null terminator)
    char output[31]; // Array to store the cleaned string
    char repeat;     // Variable to store the user's decision to repeat

    do {
        // Welcome message and user input
        printf("Welcome! Please enter a string (up to 30 characters, including numbers, letters, and symbols): ");
        fgets(input, 31, stdin);

        // Remove non-alpha characters from the input string
        removeNonAlpha(input, output);

        // Display the cleaned string
        printf("The cleaned string is: %s\n", output);

        // Ask the user if they want to repeat the process
        printf("Do you want to repeat? (y/n): ");
        scanf(" %c", &repeat);
        getchar(); // Clear the newline character from the input buffer

    } while (repeat == 'y' || repeat == 'Y');

    printf("Thank you for using the program. Goodbye!\n");
    return 0;
}
