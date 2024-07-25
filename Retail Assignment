//write a program to ask a user for number of visitors/customers for 7 days of the week (for one week)

#include <stdio.h>
#define MAX_DAYS 7
int main() {
    int visitors[MAX_DAYS];
    int totalVisitors = 0;

    printf("Enter the number of visitors for each day:\n");

    for (int i = 0; i < MAX_DAYS; i++) {
        printf("Day %d: ", i + 1);
        scanf("%d", &visitors[i]);
        totalVisitors += visitors[i];
    }

    printf("\nNumber of visitors for each day:\n");
    for (int i = 0; i < MAX_DAYS; i++) {
        printf("Day %d: %d visitors\n", i + 1, visitors[i]);
    }

    printf("\nTotal number of visitors in %d days: %d\n", MAX_DAYS, totalVisitors);

    return 0;
}


//updated version

#include <stdio.h>
#define MAX_DAYS 7

int main() {
    int visitors[MAX_DAYS];
    int totalVisitors = 0;
    int maxVisitors = 0, minVisitors = 0;
    int maxDay = 0, minDay = 0;
    char days{MAX_DAYS} = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday","Saturday","Sunday"}
    printf("Enter the number of visitors for each day:\n");

    for (int i = 0; i < MAX_DAYS; i++) {
        printf("Day %d: ", i + 1);
        scanf("%d", &visitors[i]);
        totalVisitors += visitors[i];

        // Initialize max and min on the first iteration or update if new values are found
        if (i == 0 || visitors[i] > maxVisitors) {
            maxVisitors = visitors[i];  // Update maxVisitors if current day's visitors are higher
            maxDay = i + 1;  // Store the corresponding day (1-based index)
        }
        if (i == 0 || visitors[i] < minVisitors) {
            minVisitors = visitors[i];  // Update minVisitors if current day's visitors are lower
            minDay = i + 1;  // Store the corresponding day (1-based index)
        }
    }

    printf("\nNumber of visitors for each day:\n");
    for (int i = 0; i < MAX_DAYS; i++) {
        printf("Day %d: %d visitors\n", i + 1, visitors[i]);
    }

    printf("\nTotal number of visitors in %d days: %d\n", MAX_DAYS, totalVisitors);

    // Output the day with the highest number of visitors
    printf("Day with the highest number of visitors: Day %d (%d visitors)\n", maxDay, maxVisitors);

    // Output the day with the lowest number of visitors
    printf("Day with the lowest number of visitors: Day %d (%d visitors)\n", minDay, minVisitors);

    return 0;
}
