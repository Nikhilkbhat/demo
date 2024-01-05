#include<stdio.h>
int main()
{
int i,j,n;

printf("Enter the number of n ");
scanf("%d",&n);

for(i=0;i<n;i++)
{
  for(j=0;j<n-i;j++)
  {
    printf(" ");
  }

  int x=1;
  for(j=1;j<=i;j++)
  {
  printf("%d ",x);
  x=x*(i-j)/j;
  }
 printf("\n");
}
return 0;
}
