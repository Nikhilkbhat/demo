#include<stdio.h>

int Findmax(int *arr,int size)
{
  if (size<=0)
  {
  return -1;
  }
  
  
  int max=arr[0];
  for(int i=0;i<size;i++)
  {
    if(arr[i] >max) 
    { 
      max=arr[i];
    }
   }
  return max;
}

int main()
{
//int arr[]={10,20,39,48,27,88};
int arr[]={-12,-22};
int size= sizeof(arr)/sizeof(arr[0]);

int maxElement=Findmax(arr,size);

if(maxElement!=-1)
{
 printf("max element is %d",maxElement);
 }
 else
 {
 printf("Element is empty or size invalid");
 }
 }
    
  
