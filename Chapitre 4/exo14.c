#include<stdio.h>
int main(void)
{
  char arrayCh[255], ch;
  int index;
  
  
     for(index=0;index <=254 && ch!='\n'; index++)
      {
        scanf("%c", &ch);
        arrayCh[index] =ch;
      }
    

      for(; index >=0; index--)
      {
        printf("%c ", arrayCh[index]);
      }

  return 0;
}
