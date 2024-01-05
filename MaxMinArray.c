#include<stdio.h>

int max(int num1, int num2)
{
	return(num1 >num2) ? num1 : num2;
}

int min(int num1, int num2)
{
	return(num1 >num2) ? num1 : num2;
}

int getmax( int arr[], int n)
{
	int res=arr[0];
	for(int i=0;i<n;i++)
		res=max(res,arr[i]);
		return res;
}

int getmin (int arr[], int n)
{
	int res=arr[0];
	for(int i=0;i<n;i++)
		res=min(res,arr[i]);
		return res;
}

int main()
{
int arr[] = {11,23,45,66,75,87,90};
int n= sizeof(arr) / sizeof(arr[0]);

printf("Minimunm element of arr is %d\n");
getmin (arr,n);

printf("Max element of arr is %d\n");
getmax (arr,n);
}
