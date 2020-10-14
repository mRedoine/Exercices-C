#include <stdio.h>
int main(void)
{
  int daphne = 100 , years =0;
  double deidre = 100.00;
  do
  {
    int interest = 100 * 10 / 100;
    daphne += interest;
    deidre = deidre * 1.05;
    years++;
    printf("%.2lf Deidre   %d daphne\n", deidre,daphne);
  }while(deidre < daphne);
  
  printf("It will take %d years for Deidre's investment to exceed Daphne's one\n", years);
  printf("%.2lf Deidre amount %3d Daphne money\n", deidre, daphne); 
  return 0;
}
