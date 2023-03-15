#include <stdio.h>

#define   STEP   20       // Step size.
#define   START   0       // Table starting value.
#define   END   300       // Table ending value.

/* Print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */


// Functions prototypes (specify for the compiler, return-type and parameters declarations [names, datatypes] ).
float convert_to_celsius(float tf);
void fahr_celsius_table(int start, int end, int step);

main() 
{
  fahr_celsius_table(START, END, STEP);
  return 0;
}


// Functions definitions below:

/* convert_to_celsius: convert a fahrenheit temperature to celsius. */
float convert_to_celsius(float tf) 
{
  return (tf-32.0) * (5.0/9.0);
}


/* fahr_celsius_table: generates a fahrenheit-celsius table taking 
 * a start, end and step value as arguments. */
void fahr_celsius_table(int start, int end, int step) {
  float fahr;

  printf("%s     %s\n", "Fahrenheit", "Celsius");
  for (fahr = start; fahr <= end; fahr += step) {
    printf("%7.1f\t\t%5.1f\n", fahr, convert_to_celsius(fahr));
  }
}

