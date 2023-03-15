#include <stdio.h>

#define START 0       // Table start point
#define STOP 300      // Table end point
#define STEP 20       // Table step size

/* Print Fahrenheit-Celsius table 
 * for fahr = 0, 20, ..., 300 */

main()
{
  float fahr;
  
  printf("Fahrenheit\tCelsius\n");
  for (fahr = START; fahr <= STOP; fahr += STEP)
    printf("%6.0f\t\t%6.1f\n", fahr, (fahr - 32) * 5/9);
}
