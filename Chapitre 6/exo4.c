#include<stdio.h>
#include<ctype.h>

int main(void)
{
  int ch, isWord, characters, words;
  characters = isWord = words = 0; 
  while((ch = getchar()) != EOF)
  {
    if (isalpha(ch) && ch != 32 && !ispunct(ch))
      characters++;

    if(isWord == 0 && !isspace(ch))
    {
      isWord = 1;
      words++;
    }
    if( isWord==1 && isspace(ch))
      isWord = 0;
  }
  printf("%lf This is the average of letters per word\n%d characters \n%d words \n", (double) characters / words, characters, words);

  return 0;

}

  
   
    
