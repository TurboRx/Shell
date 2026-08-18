#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  // Flush after every printf
  setbuf(stdout, NULL);
  
  while (1) {
    printf("$ ");

  char input[100];
  fgets(input, 100, stdin);

  input[strlen(input) - 1] = '\0';
  printf("%s: command not found\n", input);
} 
  return 0;
}
