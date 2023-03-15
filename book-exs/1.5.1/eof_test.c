#include <stdio.h>

/* Testing the output of EOF when stored in a char & int variable */

main()
{
  char endfileone = getchar();
  int endfiletwo = getchar();
  
  // On most modern systems, char is a signed type that can hold values from -128 to 127,
  // because of that there's no problem in storing EOF in this variable.
  printf("Char EOF: %d\nInt EOF: %d\n", endfileone, endfiletwo);
}
