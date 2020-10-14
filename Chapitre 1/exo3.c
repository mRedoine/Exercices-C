#include <stdio.h>
int convertAgeToDays(int age);
int main(void) {
  int age, days;
  age =42;
  days = convertAgeToDays(age);

  printf("You're %d years old, and u're on earth since %d days\n", age, days);

  return 0;
}

int convertAgeToDays(int age){
  int days = age * 365;
  return days;
}


