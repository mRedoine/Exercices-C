#include<stdio.h>
void sort(double * first, double * sec, double * third)
{
  double upper, median, lower;
  lower = *first;
  median = *sec;
  upper = *third;
  
  if(*sec < *first && *sec < *third)
    lower = *sec;
  else if (*third < * first && *third < *sec)
    lower =*third;

  if(*first < *sec && *first > *third )
    median = *first;
  else if (*third > *sec && *third < *first)
    median =*third;

  if(*first > *sec && *first > *third)
    upper = *first;
  else if(*sec > *first && * sec > *third)
    upper = *sec;

  *first = lower;
  *sec = median;
  *third = upper; 
  
}
