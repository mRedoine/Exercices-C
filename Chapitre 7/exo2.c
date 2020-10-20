#include <stdio.h>
void chline(char ch, int first_value, int second_value)
{
  if (first_value > second_value)
  {
    printf("The second value cannot be lesser than the first one !!!\n");
    return ;
  }
  for (int i = first_value; i <= second_value; i++)
    printf("%c \n", ch);
}
