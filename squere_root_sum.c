#include <stdio.h>

int main() {

  int num = 25;
  int i = 5;
  int sRoot;
  int total = 0;

  printf("Squared Sum of numbers from %d - %d\n\n", i, num);

  while (i <= num) {

    sRoot = i * i; // Get squer root of num

    printf("Output: (%d × %d) = %d\n", i, i, sRoot);
    i++;
  }
  printf("\n");
   total = sRoot += num;
  printf("Total of all the values: %d\n\n", total);
}
