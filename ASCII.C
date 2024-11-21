#include <stdio.h>

int main() {

  int asciiChar;
  printf("Enter a value between 33-106 for its ASCII value:");
  scanf(" %d", &asciiChar);

  printf("ASCII --> CHARACTER: %d --> %c\n", asciiChar, asciiChar);
  return 0;
}
