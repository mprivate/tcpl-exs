#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size */

int my_getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main()
{
  int len;                /* current line length */
  int max;                /* maximum length seen so far */
  char line[MAXLINE];     /* current input line */
  char longest[MAXLINE];  /* longest line saved here */

  max = 0;

  while ((len = my_getline(line, MAXLINE)) > 0) {
    if (len > max) {
      max = len;
      copy(longest, line);
    }

  }

  if (max > 0 && max <= MAXLINE-2) {
    printf("%s", longest);
  } else if (max >= MAXLINE-2) {
    printf("\nWARNING: Character limit per line exceeded.\n\n%s\n\nThe real length of the line is: %d. However, just 1000 characters were printed.\n", longest, max);
  } 


  
  return 0;
}


/* my_getline: read a line into s, return length */
int my_getline(char s[], int max_size)
{
  int i, extra, input;

  i = extra = 0;
  while ((input = getchar()) != EOF && input != '\n') {
    if (i < max_size-2) {
      s[i] = input;
      ++i;
    } else {
      ++extra;
    }
  }

  if (input == '\n') {
    s[i] = input;
    ++i;
  }
  s[i] = '\0';

  return (i += extra);
}

void copy(char to[], char from[])
{
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0') {
    ++i;
  }
}
