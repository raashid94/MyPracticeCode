#include<stdio.h>
#include<string.h>
void main()
{
char str[20];
int i,l;

printf("Enter any string ");
scanf("%s",&str);

l=strlen(str);
for(i=l-1;i>=0;i--)
{
printf("%c",str[i]);
}
}
