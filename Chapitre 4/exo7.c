#include<stdio.h>
int main(void)
{
  double prem, sec;
  do
  {
    printf("Entrez deux chiffres décimaux séparés par un espace : \n");
    scanf("%lf %lf", &prem, &sec);
    printf("Le résultat c'est %lf\n", (prem - sec) / (prem * sec));
    printf("Entrez deux chiffres décimaux séparés par un espace : \n");

  }while(scanf("%lf %lf", &prem, &sec)==2);

  return 0;
}
   
