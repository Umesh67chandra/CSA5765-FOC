#include <stdio.h>

int main (){
  int n = 10;

  //calculating sum of cubes from 1 to n
  int sum = n*(n+1)/2;
  sum *= sum;

  printf("Sum is: %i\n", sum);
  return 0;
}
