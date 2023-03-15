#include <stdio.h>

/* Copy its input to its output one character at a time */

main()
{
  int c;

  while ((c = getchar()) != EOF)
    putchar(c);

}
