#include <stdio.h>
void toUpper(char *toChangeChar) { *toChangeChar = *toChangeChar & (~0x20); }

int main() {
  char toTest = 'a';
  toUpper(&toTest);
  printf("-> %c\n", toTest);
  return 0;
}
