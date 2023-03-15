#include <stdio.h>

#define OUT 0     // outside a word
#define IN  1     // inside a word
/* Print histogram representing lenght of words in its input - Horizontal version */


main()
{
  int input, oldinput, length, state, point, i, blank, index, wc;
  long wl[100000], fc[10];
  state = OUT;
  length = i = wc = index = 0;
  oldinput = blank = ' ';
  point = 'o';


  
  // Declaring all the wl array elements to 0.
  for (i = 0; i <= 99999; i++) {
    wl[i] = 0;
  }
 
  // Declaring all the fc array elements to 0.
  // Limited support for a maximum length of 10.
  for (i = 0; i < 10; i++) {
    fc[i] = 0;
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

  // Frequency counter array
  for (i = 0; i <= wc; ++i) {
    if (wl[i] == 1) {
      fc[0] += 1;
    } else if (wl[i] == 2) {
      fc[1] += 1;
    } else if (wl[i] == 3) {
      fc[2] += 1;
    } else if (wl[i] == 4) {
      fc[3] += 1;
    } else if (wl[i] == 5) {
      fc[4] += 1;
    } else if (wl[i] == 6) {
      fc[5] += 1;
    } else if (wl[i] == 7) {
      fc[6] += 1;
    } else if (wl[i] == 8) {
      fc[7] += 1;
    } else if (wl[i] == 9) {
      fc[8] += 1;
    } else if (wl[i] == 10) {
      fc[9] += 1;
    }
  }
  
  // Print values of frequencies
  /* 
  for (i = 0; i < 10; ++i) {
    printf("%ld, ", fc[i]);
  }
  printf("\n");
  */

  
  // Vertical histogram generator.
  printf("\n\t\t       Vertical Histogram\n");
  
  // Generate vertical column
  for (i = 10; i >= 1; --i) {
      // Generate numbers
      if (i != 6) {
        printf("%11d", i);
      } else {
        printf("Frequency %1d", i);
      }
      if ((fc[0] > 0) && (fc[0] >= i)) {        // Digit one
        printf("%2c", point);
      } else {
        printf("%2c", blank);
      } 

      if ((fc[1] > 0) && (fc[1] >= i)) {        // Digit two
        printf("%4c", point);
      } else {
        printf("%4c", blank);
      }
      
      if ((fc[2] > 0) && (fc[2] >= i)) {        // Digit three
        printf("%4c", point);
      } else {
        printf("%4c", blank);
      }

      if ((fc[3] > 0) && (fc[3] >= i)) {        // Digit four
        printf("%4c", point);
      } else {
        printf("%4c", blank);
      }

      if ((fc[4] > 0) && (fc[4] >= i)) {        // Digit five
        printf("%4c", point);
      } else {
        printf("%4c", blank);
      }

      if ((fc[5] > 0) && (fc[5] >= i)) {        // Digit six
        printf("%4c", point);
      } else {
        printf("%4c", blank);
      }

      if ((fc[6] > 0) && (fc[6] >= i)) {        // Digit seven
        printf("%4c", point);
      } else {
        printf("%4c", blank);
      }

      if ((fc[7] > 0) && (fc[7] >= i)) {        // Digit eight
        printf("%4c", point);
      } else {
        printf("%4c", blank);
      }

      if ((fc[8] > 0) && (fc[8] >= i)) {        // Digit nine
        printf("%4c", point);
      } else {
        printf("%4c", blank);
      }

      if ((fc[9] > 0) && (fc[9] >= i)) {        // Digit ten
        printf("%4c", point);
      } else {
        printf("%4c", blank);
      }
      
      printf("\n");
    }
  
  
  // Horizontal column generator + length subtitle
  printf("\t    ");
  for (i = 1; i <= 10; i += 1) {
    // Three spaces
    printf("%d   ", i);
  }
  printf("\n");
  printf("\t\t\t  Length\n");
  
}
