#include<stdio.h>
#include "header.h"
#define QUIT 'q'

int main(void)
{
  int x, y, tr;
  char character;
  double first, second, third;
  /*
  printf("Enter a letter and 2 integers: \n");
  while((scanf("%c %d %d", &character, &x, &y)) == 3)
  { 
    character_display(character, x, y);
    printf("Enter a letter and 2 integers again (q to quit): \n");
    scanf("%c %d %d", &character, &x, &y);
  }
  
  
  printf("Enter 2 decimal values: \n");
  while((scanf("%lf %lf", &first, &second)) == 2)
  { 
    //printf("The harmonic_mean is : %.4f\n", harmonic_mean(first, second));
     printf("Before first:\n %lf and second: %lf\n", first, second);
     larger_of(&first, &second);
  }
   printf("Enter 3 decimal values: \n");
   while((scanf("%lf %lf %lf", &first, &second, &third)) == 3)
   { 
     printf("Before first: %lf, second: %lf and third: %lf\n", first, second, third);
     sort(&first, &second, &third);
     printf("After first: %lf, second: %lf and third: %lf\n", first, second, third);
   }
     

     printf("Enter a number and the positive integer power ");
     printf("to which\n the number will be converted. Enter q ");
     printf("to quit.\n");
     while(scanf("%d %d", &x, &y) == 2)
    {
      to_base_n(x, y); // Appel de la fonction
      printf("\nEnter next pair of numbers or q to quit.\n");
    }
    */
       printf("Enter a number :\n");
     while(scanf("%d", &y) == 1)
    {
      x = fibonacci(y); // Appel de la fonction
      printf("%d", x );
      printf("\nEnter next pair of numbers or q to quit.\n");
    }


    printf("Hope you enjoyed this trip -- bye!\n");

    return 0;
}
