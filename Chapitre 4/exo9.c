#include<stdio.h>
int squareSum(int low, int up);
int main(void)
{
  int lower, upper, sum, temp, entry;
  do
  {
    printf("Enter lower and upper integer limits: ");
    entry=  scanf("%d %d", &lower, &upper);
    temp = lower;
    sum = squareSum(lower, upper);
    printf("The sums of the squares from %d to %d is %d\n", temp*temp, upper*upper, sum);
          
  }while(lower < upper);
  
  printf("Done\n");


  return 0;
}

int squareSum(int lower, int upper)
{
  int sum;
  
  for( sum = 0; lower <= upper; lower ++)
  {
    sum+= lower * lower;
  }

  return sum;
}
