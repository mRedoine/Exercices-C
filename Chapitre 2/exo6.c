/* Calculate the number of molecules in a quarts of water */
#include <stdio.h>
double moleculeMass(int amount);
int main(void)
{
  int waterAmount;
  double result;
  printf("Enter the water amount in quarts :");
  scanf ("%d", &waterAmount);
  
  result = moleculeMass(waterAmount);
  printf("There is %lf molecules\n", result);

  return 0;

}

double moleculeMass(int amount)
{
 double moleculeMass = 3E23;
 double quartMass = amount * 950.0;
 double result = moleculeMass * quartMass;
 printf("moleculeMass : %lf\n quartMass : %f\n result : %f\n", moleculeMass, quartMass, result);
 return result;
}
  
