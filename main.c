#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
#include <string.h>

// Fake readline function
char* readline(char* prompt) {
  fputs(prompt, stdout);
  fgets(buffer, 2048, stdin);
  char* cpy = malloc(strlen(buffer) + 1);
  strcpy(cpy, buffer);
  cpy[strlen(cpy) - 1] = '\0';
  return cpy;
}

// Fake add history
void add_history(char* unused) {}

#else
#include <editline/readline.h>
#include <editline/history.h>
#endif

// Declare a buffer for user input of size 2048
// static char input[2048];

int main(int argv, char** argc) {
  // Print version and exit information
  puts("Lispc Version 0.0.0.0.0.1");
  puts("Press Ctrl + C to Exit");

  // In a never ending loop
  while (1) {
    // Output our prompt
    char* input = readline(">>> ");

    // Add history of the input line
    add_history(input);

    // Echo input back to the user
    printf("%s\n", input);

    // Free retrived input
    free(input);
  }

  return 0;
}

