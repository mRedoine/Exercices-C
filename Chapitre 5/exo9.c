#include<stdio.h>
#include <stdbool.h>
int  input(void);
int  main(void)
{
  int number;
  bool isPrime;
  printf("Entre un chiffre :\n");
  while((scanf("%d", &number)) == 1)
  {
    for(int i = 2;i<= number; i++)
      {
        isPrime =true;
        for(int j = 2; j < i; j++)
        {
          if(i%j == 0)
          {
            isPrime = false;
            break;
          }
        }
       if(isPrime)
         printf("%d est un chiffre premier.\n", i);
      }

    printf("Un nouvel essai ?\n");
   }

 
  
  return 0;
}


