#include <stdio.h>
#define MAXLINE 1000      /* maximum input line size */

int getlineold(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */

main()
{
  int len;                    /* current line length */
  int max;                    /* maximum length seen so far */
  char line[MAXLINE];         /* current input line */
  char longest[MAXLINE];      /* longest line saved here */

  max = 0;
  while ((len = getlineold(line, MAXLINE)) > 0) {
    max = len;
    copy(longest, line);
    
    if (max > 0) {
      printf("%s", longest);
    }
  }
  return 0;
}

/* getlineold: read a line into s, return length.
 * the 'old' in the name is because C now has a built-in function for this 
 * s = 'String'; lim = 'Limit' */
int getlineold(char s[], int lim)
{
  int c, i;

  for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++) {
    s[i] = c;
  }

  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  
  return i;
  
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0') {
    ++i;
  }

}


