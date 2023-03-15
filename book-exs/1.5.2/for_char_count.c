#include <stdio.h>

#define START 0     // Initial value for the character count variable

/* Count number of characters using for loop. 2st version */

main()
{
  double nc;
  for (nc = START; getchar() != EOF; ++nc)
    ;
  printf("Character count: %.0f\n", nc);
}
