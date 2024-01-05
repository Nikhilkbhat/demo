#include<stdio.h>
void main()
{
int num=10;
int* ptr;
ptr = &num;

printf("value of num is %d\n", num);
printf("value of ptr is %d\n", ptr);
printf("value of *ptr is %d\n", * ptr);
printf("value of &num is %d", &num);
}
