#include <stdio.h>
#define MAXCHAR 1000

/* write a function reverse(s) that reverses the characters string s
 * Use it to write a program that reverses its input a line at a time*/

void reverse(char s[]);
int my_getline(char s[], int max_size);
int getindex(char s[]);
void copy(char from[], char to[]);

int main()
{
  char line[MAXCHAR];     // current line;
  int length = 0;         // current length;

  while ((length = my_getline(line, MAXCHAR)) > 0) {
    printf("Normal order: %s\n", line);
    reverse(line);
    printf("Reverse order: %s\n", line);
  }

  return 0;
}

/* my_getline: write line into an array, returns its length */
int my_getline(char s[], int max_size)
{
  int i, input;

  for (i = 0; i < max_size-2 && (input = getchar()) != EOF && input != '\n'; ++i) {
    s[i] = input;
  }

  if (input == '\n') {
    s[i] = input;
    ++i;
  }
  s[i] = '\0';

  return i;
}

/* getindex: returns an array maximum index */
int getindex(char s[])
{
  int i;

  for (i = 0; s[i] != '\0'; ++i)
    ;

  return i;
}

/* copy: copy all arrays elements into another array */
void copy(char from[], char to[])
{
  int i;

  for (i = 0; (to[i] = from[i]) != '\0'; ++i)
    ;

}

/* reverse: reverse an array elements order */

void reverse(char s[])
{
  int i, x;
  char temp[MAXCHAR];
  copy(s, temp);

  for (i = 0, x = getindex(s)-2; i <= getindex(s)-2; ++i, --x) {
    s[i] = temp[x];
  }

}

