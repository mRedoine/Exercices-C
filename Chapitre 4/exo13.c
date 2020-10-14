#include<stdio.h>
double arraySum(int index, double array[8]);
int main(void)
{
  double inputArray[8], outArray[8];
  int entry, index;

  do
  {
    printf("Enter eight decimal numbers : \n");
    for (index = 0; index <= 7; index++)
     {
      entry = scanf("%lf", &inputArray[index]);
     } 
  } while(entry == 1 && index <= 7);

    for(index=1; index < 8; index++)
  {
    outArray[index] = arraySum(index, inputArray);
  }
  outArray[0] = inputArray[0];
  printf("**************************\n");
  printf("\n");
  for(index=0; index <= 7; index++)
  {
    printf("%.1lf %3.1lf \n",inputArray[index], outArray[index]);
  }

  return 0;
} 

double arraySum(int index, double array[8])
{
  double sum = 0;
  for(int i = index; i >=0; i--)
    sum += array[i];
  return sum;
}
  
