#include<stdio.h>
int summation(int[]);
void main()
{
	
	int arr[i]= {0,1,2,3,4,5};
	int sum=summation(arr);
	printf("%d",sum);
}
int summation(int arr[])
{
int sum=0,i;
for(i=0;i<6;i++)
{
	sum=sum+arr[i];
}
return sum;
}

