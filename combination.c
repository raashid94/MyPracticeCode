#include<stdio.h>
int combination(int,int);
int factorial(int);

int main()
{
int n,r;
long int ncr;
printf("Enter the value of n and r\n");
scanf("%d%d",&n,&r);

ncr=combination(n,r);

printf("%dC%d =%ld\n\n",n,r,ncr);
return 0;
}


int combination(int n, int r)
{
int result;
result=factorial(n)/(factorial(n-r)*factorial(r));
return result;
}


	int factorial(int n)
	{
	int result=1,i;
	for(i=1;i<=n;i++)
	{
	result=result*i;
	}
	return result;
	}
