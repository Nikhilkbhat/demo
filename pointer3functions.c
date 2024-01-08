#include<stdio.h>

void square(int *num)
{
 *num= (*num) * (*num);
}

int main()
{
int value,num1;
printf("Enter the number to find square root");
scanf("%d",&value);

square(&value);
&value=num1;

printf("square root of %d is %d\n", value,num1);

return 0;
}
