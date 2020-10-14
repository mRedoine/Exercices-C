#include <stdio.h>
#include <ctype.h>

void message(void);
double shippingPrice(double weight);
double charge_discount(double charge);

int main(void)
{
  const double ARTICHOKES = 2.05, BEETS = 1.15, CARROTS = 1.09;
  double shipping,pounds,total_weight, 
                  artichoke_weight, beet_weight, carrot_weight, 
                  charge, discount, taxes;
  char ch;
  shipping = artichoke_weight = total_weight = beet_weight = carrot_weight = charge= taxes = 0.0;
  printf("Welcome to ABC Mail Grocery!\n");
  message();
  while((ch = getchar()) != 'Q')
  {
    switch(ch)
    {
      case 'A':
        printf("How many pounds of artichokes do you want:\n");
        scanf("%lf", &pounds);
        artichoke_weight += pounds;
        charge += artichoke_weight * ARTICHOKES;
        total_weight += pounds ;
        pounds = 0.0;
        message();
        break;

      case 'B':
        printf("How many pounds of beets do you want:\n");
        scanf("%lf", &pounds);
        beet_weight += pounds;
        charge += beet_weight * BEETS;
        total_weight += pounds;
        pounds = 0.0;
        message();
        break;
  
      case 'C':
        printf("How many pounds of carrots do you want:\n");
        scanf("%lf", &pounds);
        carrot_weight += pounds;
        charge += carrot_weight * CARROTS;
        total_weight += pounds;
        pounds = 0.0;
        message();
        break;
    }

  }
  shipping = shippingPrice(total_weight);
  if(charge > 100.00)
    discount = charge_discount(charge);
  printf("You ordered:\n");
  if(artichoke_weight > 0)
    printf("*%.2lf pounds of artichokes for $%.2lf.\n", artichoke_weight, artichoke_weight * ARTICHOKES);
  
  if(beet_weight > 0)
    printf("*%.2lf pounds of beets for $%.2lf.\n", beet_weight, beet_weight * BEETS);
  
  if(carrot_weight > 0)
    printf("*%.2lf pounds of carrots for $%.2lf.\n", carrot_weight, carrot_weight * CARROTS);
  
  printf("\n");
  printf("Total charges		Shipping		Discount\n");
  printf("$%.2lf			$%.2lf			$%.2lf\n", charge, shipping, discount);
  
  printf("Grand Total: $%.2lf\n", charge + shipping - discount);

  return 0;
}

double shippingPrice(double weight)
{
  double price = 0.0 ;
  if( weight <= 5)
    price = 6.50;
  else if(weight > 5 && weight < 20)
    price = 14.00;
  else
    price = 14.00 + (0.5 * (weight - 20));

  return price;
}

double charge_discount(double charge)
{
  double reduction = (charge * 5) / 100;
  return reduction;
}
  
void message(void)
{
  printf("Enter the first letter of your choosen article:\n");
  printf("*** A for artichoke: $2.05/pound		B for beet: $1.15/pound\n");
  printf("*** C for carrot: $1.09/pound		 	Q to quit  \n");
}
