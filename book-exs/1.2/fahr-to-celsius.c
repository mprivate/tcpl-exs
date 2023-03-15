#include <stdio.h>

/* print fahrenheit-celsius table 
 * for fahr = 0, 20, ..., 300 */

main()
{
  int start, stop, step, celsius, fahr;
  start = fahr = 0;    // Fahr table start;
  stop = 300;          // Fahr table stop;
  step = 20;           // Fahr table step;
  
  celsius = start;

  for (int fahr; fahr <= stop; fahr = fahr + step) {
    celsius = (fahr - 32) / 1.8;
    printf("%d\t%d\n", fahr, celsius);
  }
  
  

}
