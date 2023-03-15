#include <stdio.h>

#define OUT 0     // outside a word
#define IN  1     // inside a word
/* Print histogram representing lenght of words in its input - Horizontal version */


main()
{
  int input, oldinput, length, state, i, x, index, wc;
  long wl[100000];
  state = OUT;
  length = i = x = wc = index = 0;
  oldinput = ' ';

  
  // Declaring all the arrays elements to 0.
  for (i = 0; i <= 65535; i++) {
    wl[i] = 0;
  }

  
  while ((input = getchar()) != EOF) {
   
    // Index increaser.
    if ((input == ' ' || input == '\n' || input == '\t') && (oldinput != ' ' && oldinput != '\n' && oldinput != '\t'))
      index += 1;


    // Word counter + Length reset.
    if (input == ' ' || input == '\n' || input == '\t') {
      state = OUT;
      length = 0;
    } else if (state == OUT) {
      state = IN;
      wc += 1;
    } 

    // Length counter per word.
    if (state == IN) {
      length += 1;
      wl[index] = length;
    }
    
    // Storing oldinput.
    oldinput = input;


    
    // Test length variable.
    //printf("\nLength: %d\n", length);
  }
  

  // Words length testing site.
  /*
  printf("Words length:");
  for (i = 0; i < wc; i++)
    printf(" %ld,", wl[i]);
  printf("\n");
  */
  
  
  // Horizontal histogram generator.
  printf("\n\t\t    Horizontal Histogram\n");
  for (i = 10; i >= 2; i -= 2) {
    // Vertical column generator + length subtitle handler
    if (i != 6) {
      printf("  %6d ", i);
    } else {
      printf("Length 6 ");
    }

    // Points generator
    for (x = 0; x <= wc; ++x) {
      if (wl[x] == i) {
        printf("||");
      }
    }
    printf("\n");
  }

  // Horizontal column generator + frequency subtitle 
  printf("         ");
  for (i = 2; i <= 18; i += 2) {
    printf("   %d", i);
  }
  printf("\n");
  printf("\t\t\tFrequency\n");

}
