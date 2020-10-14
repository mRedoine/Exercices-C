/* Calculette -- Exo 9 */
#include <stdio.h>
#include<ctype.h>

char get_choice(void);
char get_first(void);
float get_operand();
void operation(char type,float operand1, float operand2);
void number_feed(char choice);

int main(void)
{
  int choice;
  while ((choice = get_choice()) != 'q')
  {
    switch (choice)
    {
      case 'a' : number_feed(choice); 
      break;
      case 's' : number_feed(choice);
      break;
      case 'd' : number_feed(choice); 
      break;
      case 'm' : number_feed(choice); 
      break;
      default : printf("Program error!\n");
      break;
    }
  }
  printf("Bye.\n");
  return 0;
}

void number_feed(char choice)
{
  float operand1, operand2;
  printf("Enter first number:");
  operand1 = get_operand();
  printf("Enter second number:");
  operand2 = get_operand();
  operation(choice,operand1, operand2);
}

void operation(char type, float operand1, float operand2)
{
  switch(type)
  {
   case 'a': printf("%.2f + %.2f = %.2f\n", operand1, operand2, operand1 + operand2);
   break;
   case 'd': 
            while (operand2 == 0)
            {
              printf("Enter a number other than %.f: ", operand2);
              operand2 = get_operand();
            }
            printf("%.2f / %.2f = %.2f\n", operand1, operand2, operand1 / operand2 );
   break;
   case 'm': printf("%.2f * %.2f = %.2f\n", operand1, operand2, operand1 * operand2 );
   break;
   case 's': printf("%.2f - %.2f = %.2f\n", operand1, operand2, operand1 - operand2 );
   break;
   }         
   while ( getchar() != '\n')
    continue;
}

char get_choice(void)
{
  int ch;
  printf("Enter the operation of your choice:\n");
  printf("a. add      s. substract\n");
  printf("m. multiply d. divide\n");
  printf("q. quit	\n");
  ch = get_first();
  while ( ch != 'a' && ch != 'q' && ch != 's' && ch != 'm' && ch != 'd' )
  {
    printf("Please respond with a, s, m, d, or q.\n");
    ch = get_first();
  }
  return ch;
}

char get_first(void)
{
  int ch;
  ch = getchar();
  while (!isspace(getchar()))
    continue;
   
  return ch;
 }

float get_operand()
{
  float input;
  char ch;
  while (scanf("%f", &input) != 1)
  {
    while ((ch = getchar()) != '\n')
      putchar(ch); // dispose of bad input
    printf(" is not an number.\nPlease enter a ");
    printf("number, such as 2.5, -1E.78, or 3: ");
  }
  
  return input;
}

