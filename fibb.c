#include<stdio.h>

void main()
{
	int n1=0,n2=1,n3,i,num;
	
	printf("Enter the number of elements");
	scanf("%d",num);

	for(i=2;i<num;i++)
	{
		n3=n1+n2;
		printf(%d",n3);
		n1=n2;
		n2=n3;
	}
	

}
