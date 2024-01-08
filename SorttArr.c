#include<stdio.h>


void swap(int *a,int *b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}

void bubblesort(int arr[],int size)
{
  for(int i=0;i<size-1;i++)
  {
    for(int j=0;j<size-i-1;j++)
    {
      if(arr[j] >arr[j+1])
      {
        swap(&arr[j],&arr[j+1]);
      }
    }
  }
}

int main()
{
int arr[]= {29,33,23,15,88,99,38};
int size=sizeof(arr)/sizeof(arr[0]);

printf("The original array is ");
for(int i=0;i<size;i++)
{
  printf("%d ",arr[i]);
}
bubblesort(arr,size);
printf(" \nThe sorted array is ");
for(int i=0;i<size;i++)
{
  printf("%d ",arr[i]);
}
}

 
     
