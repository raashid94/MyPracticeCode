#include<stdio.h>
void main()
{
int a=100;
int *r;
r=&a;

printf("Value of a is %d\n",a);

printf("Value of a is %d\n\n", *r);

printf("Value of pointer is %p\n",r);

printf("Address  of a is %p\n",&a);

printf("Address  of r is %p\n",&r);



}
