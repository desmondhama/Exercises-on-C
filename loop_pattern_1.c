#include <stdio.h>

int main() {
  for (int i = 5; i >= 1; i--) {   // Loop to control rows
    for (int j = 1; j <= i; j++) { // Loop to control columns
      printf("*");
    }
    printf("\n"); // Move to the next line after printing one row
  }
  return 0;
}
