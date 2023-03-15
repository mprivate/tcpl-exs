#include <stdio.h>

#define   DEFAULT   0     // Default starting value.

/* Print a histogram of the frequencies 
 * of different characters in its input */

// Characters types used: Digits, whitespaces and 
// any other remaining type in the same category.

main()
{
  int input, i, n, idx, x, digits[10], nwhite, nother;
  char title[] = "Horizontal bars histogram";
  char stitle[] = "Frequency";
  char cone[] = "Digits";
  char ctwo[] = "Whitespaces";
  char cthree[] = "Others";
  nwhite = i = idx = x = nother = DEFAULT;


  // Explanation of how the "digits" array works:
  //  The idea is that starting from index 0 to index 9, we have 10 possible digits [0, 1, ..., 9],
  // so each element will store the frequency of that digit.
  
  // Setting all elements to 0. 
  for (i = 0; i <= 9; ++i) {
    digits[i] = 0;
  }

  // Getting and storing input correctly.
  while ((input = getchar()) != EOF) {
    if (input >= '0' && input <= '9') {
      ++digits[input-'0'];
    } else if (input == ' ' || input == '\n' || input == '\t') {
      ++nwhite;
    } else {
      ++nother;
    }
  }
  // Generate histogram with horizontal bars.
  printf("\n%45s\n\n", title);

  // Vertical column
  for (i = 0; i < 3; ++i) {
    if (i == 0) {
      // Digits

      // Print numbers;
      for (n = 9; n >= 0; n--) {
        if (n != 5) {
          printf("%11d ", n);

          // Point generation 1;
          if (digits[n] > 0) {
            x = 0;
            while (digits[n] > x) {
              printf("***");
              x += 1;
            }
          }
          printf("\n");
        } else if (n == 5) {
          printf("%6s %4d ", cone, n);
          if (digits[n] > 0) {
            x = 0;
            while (digits[n] > x) {
              printf("***");
              x += 1;
            }
          }
          printf("\n");
        }
      }
      printf("\n");
    } else if (i == 1) {
      printf("%s ", ctwo);
      for (n = 0; n <= nwhite; ++n) {
        printf("***");
      }
      printf("\n\n");
    } else if (i == 2) {
      printf("%11s ", cthree);
      for (n = 0; n <= nother; ++n) {
        printf("***");
      }
      printf("\n\n");
    }
  }

  // Horizontal column
  printf("\t      "); 
  for (i = 1; i <= 10; i++){
    printf("%d  ", i);
  }
  printf(">10");
  printf("\n");




}
