#include <stdio.h>

#define START 0     // Initial number of characters 
/* Program to count characters 1st version */

main()
{
  long nc = START;
  int input;

  while ((input = getchar()) != EOF)
    ++nc;
  printf("Total characters: %ld\n", nc);
}
