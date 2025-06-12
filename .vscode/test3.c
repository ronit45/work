#include <stdio.h>

int main() {
    FILE *input_file, *odd_file, *even_file;
    int number;

    // Open the input file for reading
    input_file = fopen("DATA", "r");
    if (input_file == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }

    // Open files for writing odd and even numbers
    odd_file = fopen("ODD", "w");
    if (odd_file == NULL) {
        printf("Error opening ODD file.\n");
        fclose(input_file);
        return 1;
    }

    even_file = fopen("EVEN", "w");
    if (even_file == NULL) {
        printf("Error opening EVEN file.\n");
        fclose(input_file);
        fclose(odd_file);
        return 1;
    }

    // Read numbers from input file and write them to appropriate files
    while (fscanf(input_file, "%d", &number) != EOF) {
        if (number % 2 == 0) {
            fprintf(even_file, "%d\n", number);
        } else {
            fprintf(odd_file, "%d\n", number);
        }
    }

    // Close all files
    fclose(input_file);
    fclose(odd_file);
    fclose(even_file);

    printf("Numbers have been written to ODD and EVEN files.\n");

    return 0;
}
