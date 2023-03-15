#include <stdio.h>
#define MAXCHAR 1000  // maximum characters per line.

/* remove trailing blanks and tabs from each
 * line of input, and to delete entirely blank lines */

int my_getline(char string[], int size);
void format_line(char string[]);
void delete(char string[], char element);
int getindex(char string[]);

int main()
{
  char line[MAXCHAR];    // current line
  int length;            // current length

  while ((length = my_getline(line, MAXCHAR)) > 0) {
    if (line[0] != '\n') {
      format_line(line);
      printf("%s", line);
    }
  }

  return 0;
}


/* my_getline: transform each character (with few exceptions )into an array element, creating a line;
 * return character array length */
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


/* getindex: get the number of elements inside an character array */
int getindex(char string[])
{
  int i;

  for (i = 0; string[i] != '\0'; ++i)
    ;

  return i;
}


/* delete: delete a specific element from a character array */
void delete(char string[], char element)
{
  int i, x, z;
  i = x = z = 0;

  while (string[i] != '\0') {
    if (string[i] == element) {
      for (x = 1, z = i; x <= getindex(string); x += 1, z += 1) {
        string[z] = string[i+x];
      }
    } else {
      ++i;
    }
  }
}


/* format_line: calls delete() function to format an array in order to remove trailing blanks
 * and tabs from each line of input */
void format_line(char string[])
{
  delete(string, ' ');
  delete(string, '\t');
}
