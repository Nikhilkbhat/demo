#include<stdio.h>

int main()
{
int arr[] = {12,34,5,43,38,9};
int *ptr=arr;

for(int i=0;i<6;i++)
{
	printf("elemets of array %d is %d\n",i+1,*(ptr+i));
	
}
return 0;
}
