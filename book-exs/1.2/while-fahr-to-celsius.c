#include <stdio.h>

/* Print the Fahrenheit-Celsius table using while loop 
 * for fahr = 0, 20, 40, ..., 300 */

main()
{
  int start, stop, step;
  float celsius, fahr;

  celsius = fahr = start = 0;   // Start of the fahrenheit table;
  stop = 300;                   // Stop limit of the fahrenheit table;
  step = 20;                    // Step size;

  while (fahr <= stop) {
    celsius = (fahr - 32.0) / 1.8;
    printf("%3.0f\t%6.2f\n", fahr, celsius);
    fahr = fahr + step;
  }

}
