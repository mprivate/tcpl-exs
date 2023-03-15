#include <stdio.h>

/* Print Fahrenheit-Celsius table 
 * for fahr = 0, 20, ..., 300; */

main()
{
  float fahr, celsius;
  int start, stop, step;

  fahr = celsius = start = 0;
  stop = 300;
  step = 20;

  printf("Fahrenheit\tCelsius\n");
  for (fahr = start; fahr <= stop; fahr = fahr + step) {
    celsius = ((fahr - 32.0) * 5) / 9;
    printf("%6.0f\t\t%6.2f\n", fahr, celsius);
  }
}
