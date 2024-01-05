#include<stdio.h>

void swap(int *var1, int *var2)
{
  int temp=*var1;
  *var1=*var2;
  *var2=temp;
}

int main()


{
	
	int var1=70,var2=30;
	
	swap(&var1,&var2);
	printf("variable before swap= %d, %d\n",var1,var2);
	printf("variable after swapping=%d, %d",var1,var2);
	return 0;
}
