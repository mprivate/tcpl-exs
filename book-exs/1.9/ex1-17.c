#include <stdio.h>
#define MAXCHAR 1000

/* print all input lines that are 
 * longer than 80 characters */ 

int my_getline(char string[], int size);

int main()
{
  char line[MAXCHAR];    // current line
  int length = 0;        // current length

  while ((length = my_getline(line, MAXCHAR)) > 0) {
    if (length >= 80) {
      printf("%s", line);
    }
  }

  return 0;
}


/* my_getline: transform line characters into an array elements;
 * return line length. */
int my_getline(char string[], int size)
{
  int i, input;

  for (i = 0; i < size-2 && (input = getchar()) != EOF && input != '\n'; ++i) {
    string[i] = input;
  }

  if (input == '\n') {
    string[i] = input;
    ++i;
  }
  string[i] = '\0';

  return i;
}
