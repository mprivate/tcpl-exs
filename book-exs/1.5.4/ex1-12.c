#include <stdio.h>

/* Print input one word per line */

main()
{
  int input, lastinput;
  lastinput = ' ';

  while ((input = getchar()) != EOF) {
    if (input == ' ' || input == '\n' || input == '\t') {
      while (input == ' ' || input == '\t')
        input = getchar();
      putchar('\n');
    }
    putchar(input);
  }
}
