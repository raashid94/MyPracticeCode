#include<stdio.h>
int swap(int*, int*);


void main()
{
int a,b;

printf("Enter the value of a and b: ");
scanf("%d%d",&a,&b);

printf("\nBefore Swapping value of a & b: %d %d",a,b);
swap(&a,&b);
printf("\nAfter Swapping value of a & b: %d %d",a,b);
printf("\n\n");
}


int swap(int *x, int *y)
{
int r;
r=*x;
*x=*y;
*y=r;
return 0;
}
