#include<stdio.h>

int main()
{
int sum=0,x[6],i;
printf("Enter the 6 arr elements");

for(i=0;i<6;i++)
{
scanf("%d",x+i);

sum+= *(x+i);
}
printf("sum is %d",sum);
return 0;
}
