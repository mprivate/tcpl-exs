#include <stdio.h>

/* Verify if the expression getchar() != is 0 or 1 */

main()
{
  int c;

  while ((c = getchar() != EOF)) {
    printf("%d\n", c);
    // call getchar() again to get rid of \n character, that causes duplication of output.
    c = getchar();
  }

  printf("%d\n\n", c);
}
