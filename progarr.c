#include<stdio.h>
void main()
{
  int marks[3]={1,2,3};
  int i,sum=0;
  float avg;
  
  for(i=0;i<3;i++)
  {
  	sum=sum+marks[i];
  	avg= (float)sum/i;
  }
  printf("%d\n",sum);
  printf("%f",avg);
 }
  	
