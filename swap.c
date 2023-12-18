#include<stdio.h>
void main()

{
int a=10,b=20,c;

printf("Before swapping %d %d",a,b);

a= a+b;
b= a-b;
a= a-b;
printf("\nAfter swapping %d %d",a,b);
}
