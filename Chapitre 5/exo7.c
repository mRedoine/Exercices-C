#include<stdio.h>
#define TAX1 15
#define TAX2 20
#define TAX3 25
#define BREAK1 300
#define BREAK2 450
#define SALARYBYHOUR 10
#define OVERTIME 40
#define BASE1 (BREAK1 * TAX1) / 100
#define BASE2 (BASE1 + ((BREAK2 * TAX2)/100))

int main(void)
{
  double hours,earned, taxes,tmp, gross_pay, net_pay;
  hours = taxes = earned = gross_pay = tmp = net_pay = 0.0;
  
  printf("Please enter the hours you've worked this week.\n");
  scanf("%lf", &hours);
  tmp = hours;
  
  while(tmp>0)
  {
    if(tmp<OVERTIME)
      gross_pay += SALARYBYHOUR;
    else
      gross_pay += SALARYBYHOUR + (SALARYBYHOUR / 2);
    
    tmp--;
  }
  
  if(gross_pay <= BREAK1)
  {
    taxes = (gross_pay * 15) /100;
  }

  else if (gross_pay <= BREAK2)
  {
    taxes = BASE1 + (((gross_pay - BREAK1) * TAX2)/100);
  }

  else
  {
    taxes = BASE2 + (((gross_pay - BREAK2) * TAX3) / 100);
  }
  printf("Your grossPay: %.2lf\nTaxes: %.2lf\nNet salary: %.2lf",gross_pay, taxes, gross_pay - taxes);

  return 0;

}
