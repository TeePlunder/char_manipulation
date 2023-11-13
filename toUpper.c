#include <stdio.h>
void toLower(char *toChangeChar) { *toChangeChar = *toChangeChar & (~0x20); }

int main() {
  char toTest = 'a';
  toLower(&toTest);
  printf("-> %c\n", toTest);
  return 0;
}
