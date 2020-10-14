#include<stdio.h>
double calcul(double prem, double sec);
int main(void)
{
  double prem, sec;
  do
  {
    printf("Entrez deux chiffres décimaux séparés par un espace : \n");
    scanf("%lf %lf", &prem, &sec);
    printf("Le résultat c'est %lf\n", calcul(prem, sec));
    printf("Entrez deux chiffres décimaux séparés par un espace : \n");

  }while(scanf("%lf %lf", &prem, &sec)==2);

  return 0;
}
   
double calcul(double prem, double sec)
{
  double resultat = (prem - sec) / ( prem * sec);

  return resultat;
}

