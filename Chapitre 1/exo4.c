#include <stdio.h>
void jollyGoodMessage(void);
void endingMessage(void);

int main(void) {
  jollyGoodMessage();
  endingMessage();
  
  return 0;
}

void jollyGoodMessage(void){
 printf("For he's a jolly good fellow!\n");
 printf("For he's a jolly good fellow!\n");
 printf("For he's a jolly good fellow!\n");
}

void endingMessage(void){
  printf("Which nobody can deny!\n");
}
