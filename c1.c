#include<stdio.h>
//#include<conio.h>
void main()
{
char ch;
int i,j;
printf("\n\n");
for(i=65;i<=69;i++)
{
for(j=69;j>=i;j--)
{
printf("%c",i);
}
printf("\n");
}
printf("\n\n");
}
