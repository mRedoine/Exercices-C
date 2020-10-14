#include <stdio.h>
#define EXCESS 0.28
#define TAX 0.15
#define SINGLE 17.850
#define HOUSEHOLDHEAD 23.900
#define MARRIED 29.750
#define MARRIEDSEPARATE 14.875

double tax_calculation(int status, double income); 
void start_message(void);

int main(void)
{
  double income, taxes;
  int marital_status;
  income = taxes = 0.00;
  
  printf("How much you've earned this week ?\n");
  scanf("%lf", &income);
  start_message();
  while(scanf("%d", &marital_status)==1)
  {
   
  switch(marital_status)
  {
    case 1:
          if(income <= SINGLE)
            taxes = TAX * income;
          else
            taxes = TAX * SINGLE + (EXCESS * (income - SINGLE));
          break;
    case 2:
          if(income <= HOUSEHOLDHEAD)
            taxes = TAX * income;
          else
            taxes = (TAX * HOUSEHOLDHEAD) + (EXCESS * (income - HOUSEHOLDHEAD));
          break;
    case 3:
          if(income <= MARRIED)
            taxes = TAX * income;
          else
            taxes = (TAX * MARRIED) + (EXCESS * (income - MARRIED));
          break;
    case 4:
          if(income <= MARRIEDSEPARATE)
            taxes = TAX * income;
          else
            taxes = (TAX * MARRIEDSEPARATE) + (EXCESS * (income - MARRIEDSEPARATE));
          break;
    default:
           printf("Choisis bien Konnard!!!\n");
           scanf("%d", &marital_status);
           continue;
   }
    printf("You will have to pay $%.2lf of taxes.\n", taxes);
    start_message();

  }
  return 0;
}
void start_message()
{
 printf("*************************************************\n");
  printf("***    What is your marital status            ***\n");
  printf("***    1) Single	2)Head of household   ***\n");
  printf("***    3) Married	4)Married,Separate    ***\n");
  printf("*************************************************\n");
}
