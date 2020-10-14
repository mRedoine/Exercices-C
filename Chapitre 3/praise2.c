/* praise2.c */
#include<stdio.h>
#include<string.h>	/* provides strlen() prototypes */
#define PRAISE "What a super marvelous name!"
int main(void)
{
  char name[40];

  printf("What's your name?\n");
  scanf("%s", name);
  printf("Hello, %s. %s\n", name, PRAISE);
  printf("Your name of %lu letters occupies %lu memory cells.\n", strlen(name), sizeof name);
  printf("The phrase of praise has %lu letters ", strlen(PRAISE));
  printf("and occupies %lu memory cells.\n", sizeof PRAISE);

  return 0;

}
