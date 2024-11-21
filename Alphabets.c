#include <stdio.h>

/*int main() {
  int numToChar = 65;
  printf("65 --> A: %c\n",numToChar);
}*/

int main() { 

  int asciiChar;
  printf("Enter a value between 0-127 for its ASCII value:");
  scanf(" %d",&asciiChar);
  
  /*for (int i = 65;i <= 90;i++) {*/
    printf("ASCII --> CHARACTER: %d --> %c\n",asciiChar,asciiChar);
  /*}*/
  /*printf("\n");*/
    return 0;
}
