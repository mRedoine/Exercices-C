#include<stdio.h>
int main(void)
{
  const int ROWS = 5;

  for(int index = 0; index <= ROWS; index++)
  {
    for(int i =ROWS+index ; i >= ROWS; i--)
    {     
      printf("$");
      printf("%d", i);
    }
    printf("\n");
  }

  return 0;
}
