#include <stdio.h>

/* Print Celsius-Fahrenheit table 
 * for celsius = 0, 20, ..., 300 */

main()
{
  int celsius;

  printf("Celsius\t\tFahrenheit\n");
  for (celsius = 0; celsius <= 300; celsius += 20) 
    printf("%3d\t\t%7.1f\n", celsius, (celsius * 1.8) + 32);
}
