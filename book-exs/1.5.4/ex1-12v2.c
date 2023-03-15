#include <stdio.h>

#define OUT 0     // Outside of a word
#define IN  1     // Inside of a word
/* Print input one word per line */


main()
{
  int input, state;
  state = OUT;

  while ((input = getchar()) != EOF) {
    if (input != ' ' && input != '\n' && input != '\t') {
      state = IN;
      putchar(input);
    } else if (state == IN) {
      state = OUT;
      putchar('\n');
    }
  }
}
