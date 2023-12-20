#include<stdio.h>
void main()
{
	int r,sum=0,i,n;
	int temp;


	printf("Enter the number");
	scanf("%d",&n);

	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(temp==sum)
	printf("palindrome");
	else
	printf("not palindrome");
}

