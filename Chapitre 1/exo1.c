#include <stdio.h>
int main(void) {
  char* name;
  char* firstname;
  name = "BUSH";
  firstname = "Vanevar";
 
  printf("%s %s\n", firstname, name);
  printf("%s\n%s\n",name,firstname);
  printf("%s %s\n",name, firstname);

  return 0;
}
