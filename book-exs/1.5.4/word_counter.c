#include <stdio.h>

#define DEFAULT ' '     // default value

/* Lines, words and characters counter */

main()
{
  int lastinput, input, lc, wc, cc;
  lc = cc = wc = 0;
  lastinput = DEFAULT;

  while ((input = getchar()) != EOF) {
    // count every character
    ++cc;
    // line counter
    if (input == '\n')
      ++lc;
    // word counter
    if ((input == ' ' || input == '\n' || input == '\t') && (lastinput != ' ' && lastinput != '\n' && lastinput != '\t'))
      ++wc;

    lastinput = input;
  }
  
  printf("\nCharacter count: %d\nLine count: %d\nWord count: %d\n", cc, lc, wc);

}
