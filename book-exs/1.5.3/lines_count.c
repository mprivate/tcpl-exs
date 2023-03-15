#include <stdio.h>

/* Lines counter */

main()
{
  double lc = 0;
  int input;

  while ((input = getchar()) != EOF) {
    if (input == '\n')
      ++lc;
  }
  printf("Lines counter: %.0f\n", lc);
}
