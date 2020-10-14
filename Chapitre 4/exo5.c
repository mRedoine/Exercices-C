#include<stdio.h>
int power(int n);
int cube(int n);
int main(void)
{
  int upper, lower, pow, cubed;
  printf("Entrez la plage de valeurs (2 chiffres) : ");
  scanf("%d %d", &lower, &upper);
  printf("\n");

  printf("Valeur\tCarré\t    Cube\n");
  printf("_________________________\n");
  for (; lower <= upper; lower++)
   {
     pow = power(lower);
     cubed = cube(lower);
     printf("%d %10d %10d\n", lower, pow, cubed);
     printf("_________________________\n");
   }

    
   
   
   return 0;
}


int power(int n)
{
  int power = n *n;

  return power;
}

int cube(int n)
{
  int cubed = n*n*n;

  return cubed;
}
