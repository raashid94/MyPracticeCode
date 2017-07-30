#include<stdio.h>
int permutation(int,int);
int factorial(int);

int main()
{
int n,r;
long int npr;
printf("Enter the value of n and r\n");
scanf("%d%d",&n,&r);

npr=permutation(n,r);

printf("%dP%d =%ld\n\n",n,r,npr);
return 0;
}


int permutation(int n, int r)
{
int result;
result=factorial(n)/factorial(n-r);
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
