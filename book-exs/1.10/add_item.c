#include <stdio.h>

/* Insert elements into arrays */

void arr_add(char array[], char element, int pos, int amount);

int main(){
  char array[1000] = "Oi";
  printf("Before: %s\n", array);
  arr_add(array, 'c', 1, 4);
  printf("After: %s\n", array);
  return 0;
}

void arr_add(char array[], char element, int pos, int amount) {
  // Control the For-Loop
  int i;
  int x;

  // Discover last index
  int last_idx;
  for (i = 0; array[i] != '\0'; ++i) {
    ;
  }
  last_idx = i;

  // Add element
  for (x = 0; x < amount; ++x, ++pos) {
    array[last_idx] = array[last_idx+(x+1)];
    array[pos] = element;
  }
  

  
}


