#include<stdio.h>


int main(void)
{
  int number, even_count, even_sum, odd_count, odd_sum;
  even_count = even_sum = odd_count = odd_sum = 0;

  while((scanf("%d", &number)) == 1 && number != 0)
  {
    int type;
    if((number % 2) == 0)
    {
      type = 1;
    }
    else
    {
      type = 2;
    }
   
    switch(type)
    {
      case 1 :
              even_count++;
              even_sum += number;
              break;
      case 2 :
              odd_count++;
              odd_sum += number;
              break;

      default :
              break;
    }
    
  }

  printf("Tu as entré %d chiffres impairs, ce qui donne une moyenne de %.2f.\nAussi %d chiffres pairs pour une moyenne de %.2f.\n",
        odd_count,(float) odd_sum / odd_count, even_count,(float) even_sum / even_count);
  return 0;
}
