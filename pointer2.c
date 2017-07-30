#include<stdio.h>
void main()
{
int marks[]= {10,20,30};
int *point[3],i;

for(i=0;i<3;i++)
{
printf("%d   ",marks[i]);
point[i] = &marks[i];
}

printf("\n\n");
for(i=0;i<3;i++)
{
printf("%d   ",*point[i]);
}
printf("\n");
}
