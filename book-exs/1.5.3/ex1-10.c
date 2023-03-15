#include <stdio.h>

/* Copy input to output, replacing each tab by \t, each backspace by \b,
 * and each backslash by \\. */

main()
{
  int input;

  while ((input = getchar()) != EOF) {
    if (input == '\t' || input == '\b' || input == '\\') {
      while (input == '\t') {
          input = getchar();    
          printf("\\t");
        }
      while (input == '\b') {
        input = getchar();
        printf("\\b");
      }
      while (input == '\\') {
        input = getchar();
        printf("\\\\");
      }
    }
    putchar(input);

  }

}
