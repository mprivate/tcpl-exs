#include <stdio.h>

/* Print the Fahrenheit-celsius table
 * for fahr = 300, 280, ..., 0 */

main()
{
  float fahr;

  printf("Fahrenheit\tCelsius\n");
  for (fahr = 300; fahr >= 0; fahr -= 20)
    printf("%6.0f\t\t%6.1f\n", fahr, (fahr - 32) * 5/9);
}
