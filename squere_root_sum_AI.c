#include <stdio.h>

int main() {
    int num = 25;
    int i = 5;
    int total = 0;

    printf("Squared Sum of numbers from %d - %d\n\n", i, num);

    while (i <= num) {
        int sRoot = i * i; // Get square of the number
        printf("Output: (%d × %d) = %d\n", i, i, sRoot);
        total += sRoot; // Add the current square to the total
        i++;
    }

    printf("\n");
    printf("Total of all the values: %d\n\n", total);

    return 0;
}
