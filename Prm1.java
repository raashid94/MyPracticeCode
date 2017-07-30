import java.util.Scanner;
class Prm{

int fun1(int n,int r) {
int res;
res=fact(n)/fact(n-r);
return res;
}


int fact(int n) {
int fac=1,i;
for(i=1;i<=n;i++)
{
fac= fac*i;
}
return fac;
}



public static void main(String args[])
{
int npr;
System.out.println("Enter the value of n & r");
Scanner sc= new Scanner(System.in);
int n=sc.nextInt();
int r=sc.nextInt();

npr=fun1(n,r);
System.out.println(n+"P"+r+"="+npr);
}
}
