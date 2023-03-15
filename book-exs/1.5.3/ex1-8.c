#include <stdio.h>

#define START 0     // Initial value for the counting variables.
/* Count blanks, tabs and newlines */

main()
{
  int bc, tc, lc, input;
  bc = tc = lc = START;
  
  while ((input = getchar()) != EOF) {
    if (input == ' ')
      ++bc;
    if (input == '\t')
      ++tc;
    if (input == '\n')
      ++lc;
  } 

  printf("\nBlank counter: %d\nTab counter: %d\nNewline counter: %d\n", bc, tc, lc);



}
