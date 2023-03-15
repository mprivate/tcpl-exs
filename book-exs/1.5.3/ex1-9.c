#include <stdio.h>

/* Copy input to output, replacing each string of one
 * or more blanks by a single blank */
 
 main()
{
  int input;

  while ((input = getchar()) != EOF) {
    if (input == ' ') {
      while ((input = getchar()) == ' ')
        ;
      putchar(' ');
    }
    putchar(input);
  }
}

