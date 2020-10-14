#include<stdio.h>
int main(void)
{
  int chuckie = 1000000, years = 0;
  do
  {
   chuckie *= 1.08;
   printf("%d chuckie after interest\n", chuckie);
   chuckie -= 100000;
   printf("%d chuckie after his annual withdraw\n", chuckie);
   years++;
  } while(!chuckie <= 0);

  printf("It took %d years to empty your account dumbass!\n",  years);

  return 0;

}
