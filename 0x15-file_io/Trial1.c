#include <stdio.h>
// #define BUFSIZ 1024

int main() {
  char myBuffer[BUFSIZ];
  FILE* filePtr;
  filePtr = fopen("input.txt", "r");

  if (filePtr == NULL) {
    printf("Error: could not open input file.\n");
    return 1;
  }

  while (fgets(myBuffer, BUFSIZ, filePtr) != NULL) {
    printf("Read from file: %s\n", myBuffer);
  }
  printf("The size of BUFSIZ is: %lu\n", (unsigned long)sizeof(char[BUFSIZ]));

  fclose(filePtr);
  return 0;
}