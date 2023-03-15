#include <stdio.h>

/* Read a set of text lines and print the longest */

int getmaxlength(int array[], int elements);
void getbiggerline();

main()
{
  getbiggerline();
}


int getmaxlength(int array[], int elements)
{
  int i, maxlength;
  maxlength = 0;

  for (i = 0; i < elements; ++i) {
    if (array[i] > maxlength) {
      maxlength = array[i];
    }
  }

  return maxlength;
}


void getbiggerline()
{
  int input, line, charcount, i, length[128], maxlength;
  char content[128], content_backup[128];
  charcount = line = maxlength = 0;

  for (i = 0; i < 128; ++i) {
    length[i] = 0;
  }

  while ((input = getchar()) != EOF) {
    if (input != '\n') {
      ++charcount;
      ++length[line];
      content[charcount-1] = input;
      maxlength = length[line];
    } else {
      if (length[line] > maxlength) {
        maxlength = length[line];
        for (i = 0; i < 128; ++i) {
          content[i] = content_backup[i];
        }
      }
      charcount = 0;
      ++line;
    }
  }
  
  printf("Biggest line: ");
  for (i = 0; i < getmaxlength(length, 128); ++i) {
    printf("%c", content[i]);
  }
  printf("\n");

  
}


