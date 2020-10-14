#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define TAX1 0.15
#define TAX2 0.20
#define TAX3 0.25
#define BREAK1 300
#define BREAK2 450
#define OVERTIME 40
#define BASE1 (BREAK1 * TAX1)
#define BASE2 (BASE1 + (BREAK2 * TAX2))

char get_choice(void);
int get_first(void);

int main(void)
{
  double hours,hourpay,earned, taxes,tmp_hours, gross_pay, net_pay;
  hours = taxes = earned = gross_pay = tmp_hours = net_pay = 0.0;
  int choice;
  printf("Please enter the hours you've worked this week.\n");
  scanf("%lf", &hours);
  tmp_hours = hours;
  while((choice = get_choice()) != 'q')
  {
    switch(choice)
    {
      case 'a':
            hourpay = 8.75;
            break;
      case 'b':
            hourpay = 9.33;
            break;
      case 'c':
            hourpay = 10.00;
            break;
      case 'd':
            hourpay = 11.20;
            break;
      default:
            printf("Erreur.\n");
            break;
     }
  
  }
  while(tmp_hours>0)
  {
    if(tmp_hours<OVERTIME)
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

char get_choice(void)
{
  int ch;
  printf("*****************************************************************\n");
  printf("Enter the letter corresponding to the desired pay rate or action:\n");
  printf("a) $8.75/hr        b) $9.33/hr\n");
  printf("c) $10.00/hr       d) $11.20/hr\n");
  printf("q) quit.            \n");
  printf("*****************************************************************\n");
  ch = get_first();
  while ( (ch < 'a' || ch > 'd') && ch != 'q')
  {
    printf("Please respond with a, b, c, d, or q.\n");
    ch = get_first();
  }
  return ch;
}

int get_first(void)
{
  int ch;
  ch = getchar();
  while (getchar() != '\n')
    continue;
  
  return ch;
}
  
