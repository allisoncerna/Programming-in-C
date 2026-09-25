#include <stdio.h>

// Function to calculate total loan amount including interest and fees
float calculateLoanAmount(float principal) {
    float interestRate = 0.05;  // Predefined interest rate (5%)
    float loanFee = 350.0;      // Predefined loan fee

    // Calculate interest amount
    float interestAmount = principal * interestRate;

    // Calculate total loan amount
    float totalLoanAmount = principal + interestAmount + loanFee;

    return totalLoanAmount;
}

int main(void) {
    float principal;  // Principal amount of the loan
    float totalAmount; // Total loan amount including interest and fees

    // Prompt user for principal amount
    printf("Enter the principal amount of the loan: ");
    scanf("%f", &principal);

    // Calculate total loan amount
    totalAmount = calculateLoanAmount(principal);

    // Display the total loan amount
    printf("Total loan amount including interest and fees: $%.2f\n", totalAmount);

    return 0;
}
