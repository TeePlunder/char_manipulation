#include <stdio.h>
void toLower(char *toChangeChar) { *toChangeChar = *toChangeChar + 32; }

int main() {
  char toTest = 'A';
  toLower(&toTest);
  printf("-> %c", toTest);
  return 0;
}
