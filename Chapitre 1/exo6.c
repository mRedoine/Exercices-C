#include <stdio.h>
int squareToes(int toes);
int twiceToes(int toes);

int main(void) {
 int toes = 10;
 int square = squareToes(toes);
 int twice = twiceToes(toes);

 printf("You've got %d toes :\n the square of your toes = %d\n twice : %d", toes, square, twice);
 
 return 0;
}

int squareToes(int toes) {
 int square = toes * toes;
 return square;
} 

int twiceToes(int toes){
 int twice = toes * 2;
 return twice;
}
