#include<stdio.h>
void main()
{
	int i,n,m=0,flag=0;

	printf("Enter the number to check prime or not");
	scanf("%d",&n);

	m=n/2;
	for(i=2;i<=m;i++)
	{
		if(n%2 == 0)
		{
		printf("Not prime");
		flag=1;
		}
	}
	if(flag==0)
	printf("Prime");
}

