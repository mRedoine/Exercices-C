#include<stdio.h>
#define TAX1 0.15
#define TAX2 0.20
#define TAX3 0.25
#define BREAK1 300
#define BREAK2 450
#define OVERTIME 40
#define BASE1 (BREAK1 * TAX1)
#define BASE2 (BASE1 + (BREAK2 * TAX2))

int main(void)
{
  double hours,hourpay,earned, taxes,tmp_hours, gross_pay, net_pay;
  hours = taxes = earned = gross_pay = tmp_hours = net_pay = 0.0;
  int choice;
  printf("Please enter the hours you've worked this week.\n");
  scanf("%lf", &hours);
  tmp_hours = hours;
  printf("*****************************************************************\n");
  printf("Enter the number corresponding to the desired pay rate or action:\n");
  printf("1) $8.75/hr		2) $9.33/hr\n");
  printf("3) $10.00/hr		4) $11.20/hr\n");
  printf("5) quit.			\n");
  printf("*****************************************************************\n");
  scanf("%d", &choice);
  
    switch(choice)
    {
      case 1:
            hourpay = 8.75;
            break;
      case 2:
            hourpay = 9.33;
            break;
      case 3:
            hourpay = 10.00;
            break;
      case 4:
            hourpay = 11.20;
            break;
      case 5:
            break;
      default:
            break;
     }
  

  while(tmp_hours>0)
  {
    if(tmp<OVERTIME)
      gross_pay += hourpay;
    else
      gross_pay += hourpay + (hourpay / 2);
    
    tmp_hours--;
  }
  
  if(gross_pay <= BREAK1)
  {
    taxes = gross_pay * TAX1;
  }

  else if (gross_pay <= BREAK2)
  {
    taxes = BASE1 + ((gross_pay - BREAK1) * TAX2);
  }

  else
  {
    taxes = BASE2 + ((gross_pay - BREAK2) * TAX3);
  }
  printf("Your grossPay: $%.2lf\nTaxes: $%.2lf\nNet salary: $%.2lf\n",gross_pay, taxes, gross_pay - taxes);

  return 0;

}

