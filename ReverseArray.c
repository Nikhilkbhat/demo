#include<stdio.h>

int ReverseArr(int *arr, int size)
{ 
 int *start=arr;
 int *end=arr+size-1;
 while(start<end)
 {
   int temp=*start;
   *start=*end;
   *end=temp;
   start++;
   end--;
 }
}


int main()
{
int arr[]={19,22,44,22,17,26};
int i;
int size=sizeof(arr)/sizeof(arr[0]);

printf("original array ");
for(i=0;i<size;i++)
{
printf("%d ",arr[i]);
}

ReverseArr(arr,size);
printf("\nReverse array");
for(i=0;i<size;i++)
{
printf("%d ",arr[i]);
}
}
