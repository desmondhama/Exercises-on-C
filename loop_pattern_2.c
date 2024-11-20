

#include <stdio.h>

int main() {
  int userInput;
   
  printf("How many stars to print: ");
  scanf("%d",&userInput);

  for (int i = 1; i <= userInput; i++) {

    for (int j = 1; j <= i; j++) {
      printf("$");   
    }
    printf("\n\n"); 
  }
}
