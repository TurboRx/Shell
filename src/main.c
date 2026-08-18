#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  setbuf(stdout, NULL);

  while (1) {
    printf("$ ");

    char input[100];
    fgets(input, 100, stdin);

    input[strlen(input) - 1] = '\0';

    if (strcmp(input, "exit") == 0) {
      break;
    } else if (strncmp(input, "echo ", 5) == 0) {
      printf("%s\n", input + 5);
    } else if (strncmp(input, "type ", 5) == 0) {
      char *arg = input + 5;
      if (strcmp(arg, "exit") == 0 || strcmp(arg, "echo") == 0 || strcmp(arg, "type") == 0)
        printf("%s is a shell builtin\n", arg);
      else
        printf("%s: not found\n", arg);
    } else {
      printf("%s: command not found\n", input);
    }
  }

  return 0;
}
