#include <stdio.h>

/* Print a histogram of the frequencies of 
 * different characters in its input */

main()
{
  int input, i, x, c;

  // Integer variable to store occurence number of each whitespace character.
  int wcount = 0;
  
  // Array containing the letters of the alphabet;
  char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
  

  // Array representing the frequency of each letters of the alphabet (a, ..., z).
  long alphabet_f[26];
  for (i = 0; i <= 25; ++i) {
    alphabet_f[i] = 0;
  }

  // Array representing the frequency of each digit (0, ..., 9)
  long digits_f[10];
  for (i = 0; i <= 9; ++i) {
    digits_f[i] = 0;
  }



  while ((input = getchar()) != EOF) {
    // Whitespace frequency counter.
    if (input == ' ' || input == '\n' || input == '\t') {
      ++wcount;
    }

    // Letters of the alphabet frequency counter.
    if (input == 'a' || input == 'A') {
      ++alphabet_f[0]; 
    } else if (input == 'b' || input == 'B') {
      ++alphabet_f[1];
    } else if (input == 'c' || input == 'C') {
      ++alphabet_f[2];
    } else if (input == 'd' || input == 'D') {
      ++alphabet_f[3];
    } else if (input == 'e' || input == 'E') {
      ++alphabet_f[4];
    } else if (input == 'f' || input == 'F') {
      ++alphabet_f[5];
    } else if (input == 'g' || input == 'G') {
      ++alphabet_f[6];
    } else if (input == 'h' || input == 'H') {
      ++alphabet_f[7];
    } else if (input == 'i' || input == 'I') {
      ++alphabet_f[8];
    } else if (input == 'j' || input == 'J') {
      ++alphabet_f[9];
    } else if (input == 'k' || input == 'K') {
      ++alphabet_f[10];
    } else if (input == 'l' || input == 'L') {
      ++alphabet_f[11];
    } else if (input == 'm' || input == 'M') {
      ++alphabet_f[12];
    } else if (input == 'n' || input == 'N') {
      ++alphabet_f[13];
    } else if (input == 'o' || input == 'O') {
      ++alphabet_f[14];
    } else if (input == 'p' || input == 'P') {
      ++alphabet_f[15];
    } else if (input == 'q' || input == 'Q') {
      ++alphabet_f[16];
    } else if (input == 'r' || input == 'R') {
      ++alphabet_f[17];
    } else if (input == 's' || input == 'S') {
      ++alphabet_f[18];
    } else if (input == 't' || input == 'T') {
      ++alphabet_f[19];
    } else if (input == 'u' || input == 'U') {
      ++alphabet_f[20];
    } else if (input == 'v' || input == 'V') {
      ++alphabet_f[21];
    } else if (input == 'w' || input == 'W') {
      ++alphabet_f[22];
    } else if (input == 'x' || input == 'X') {
      ++alphabet_f[23];
    } else if (input == 'y' || input == 'Y') {
      ++alphabet_f[24];
    } else if (input == 'z' || input == 'Z') {
      ++alphabet_f[25];
    }

    // Digits frequency counter;
    if (input >= '0' && input <= '9') {
      ++digits_f[input-'0'];
    }
  }

  // Vertical histogram generator
  
  // Title
  printf("%74s\n", "Vertical histogram");

  // Vertical column (frequency)
  for (i = 30; i >= 0; --i) {
    if (i != 18) {
      printf("%12d ", i);

      // Point generator (letters)
      for (x = 0; x <= 25; ++x) {
          if (alphabet_f[x] > 0 && alphabet_f[x] >= i) {
            printf("*  ");
          } else {
            printf("   ");
          }
        }

      // Point generator (digits)
      for (x = 0; x <= 9; ++x) {
        if (digits_f[x] > 0 && digits_f[x] >= i) {
          printf("*  ");
        } else {
          printf("   ");
        }
      }

      // Point generator (whitespaces)
      if (wcount > 0 && wcount >= i) {
        printf("*");
      }

      printf("\n");
    } else {
      printf("Frequency %d ", i);

      // Point generator (letters)
      for (x = 0; x <= 25; ++x) {
        if (alphabet_f[x] > 0 && alphabet_f[x] >= i) {
          printf("*  ");
        } else {
          printf("   ");
        }
      }

      // Point generator (digits)
      for (x = 0; x <= 9; ++x) {
        if (digits_f[x] > 0 && digits_f[x] >= i) {
          printf("*  ");
        } else {
          printf("   ");
        }
      }

      if (wcount > 0 && wcount >= i) {
        printf("*");
      }

      printf("\n");
    }
  }


  // Horizontal line (letters, digits, whitespaces)
  printf("\t   ");
  for (i = 0; i <= 25; ++i) {
    printf("%3c", alphabet[i]);
  }
  
  for (i = 0; i <= 9; ++i) {
    printf("%3d", i);
  }

  printf("%3c\n", 'W');

  printf("\t\t\t\t%s\t\t\t\t%s\t\t\t\t%s\n", "Letters", "Digits", "Whitespaces");
  
  
}
