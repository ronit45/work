#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

void sort_strings(char strings[][MAX_SIZE], int n) {
    char temp[MAX_SIZE];
    int i, j;

    // Bubble sort algorithm to sort the strings alphabetically
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcasecmp(strings[j], strings[j + 1]) > 0) {
                // Swap the strings
                strcpy(temp, strings[j]);
                strcpy(strings[j], strings[j + 1]);
                strcpy(strings[j + 1], temp);
            }
        }
    }
}

int main() {
    int n, i;
    char strings[MAX_SIZE][MAX_SIZE];

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    printf("Enter %d strings:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%s", strings[i]);
    }

    // Sort the strings
    sort_strings(strings, n);

    printf("Sorted strings:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}
