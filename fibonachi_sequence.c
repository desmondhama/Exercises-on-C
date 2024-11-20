/* fibonachi sequence = previousNum + latterNum = result then use result as the
 * new previousNum and the new latterNum and repeat e.g(0+1=2+1=3+2=5+3...) and
 * repeat */

#include <stdio.h>

int main() {
  int userInput;
   
  printf("How many stars to print: ");
  scanf("%d",userInput);

  for (int i = 1; i <= userInput; i++) {
    printf("\n");
    for (int j = 1; j <= i; j++) {
      printf("*");   
    }
    printf("\n\n"); 
  }
}
