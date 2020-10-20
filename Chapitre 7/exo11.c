/* Pris sur https://www.scriptol.fr/programmation/fibonacci.php section C Itératif */
#include<stdio.h>

int fibonacci(int number) 
{
  int first = 0, second = 1;

  int tmp;
  while (number--) {
    tmp = first+second;
    first = second;
    second = tmp;
  }
  return first;
  }
   
  

  