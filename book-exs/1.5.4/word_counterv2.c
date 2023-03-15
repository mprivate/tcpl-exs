#include <stdio.h>

#define OUT 0     // Out of a word
#define IN 1      // Inside of a word
/* Count characters, lines and words */

main()
{
  int cc, lc, wc, input, state;
  cc = lc = wc = 0;
  state = OUT;

  while ((input = getchar()) != EOF) {
    // Count every character
    ++cc;

    // Count lines
    if (input == '\n')
      ++lc;

    // Count words
    if (input == ' ' || input == '\n' || input == '\t') {
      state = OUT;
    } else if (state == OUT) {
      state = IN;
      ++wc;
    }
    // printf("\nState: %d\n", state);
  }

  printf("\nCharacter count: %d\nLine count: %d\nWord count: %d\n", cc, lc, wc);
}
