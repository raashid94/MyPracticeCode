//#include<iostream.h>
//#include<conio.h>
class Complex
{
float x,y;
public:
	Complex()
	{

	}


	Complex(float a)
	{
	x=y=a;
	}


	Complex(float real, float imag)
	{
	x=real;
	y=imag;
	}

friend Complex Sum(Complex, Complex);
friend void show(Complex);
};


Complex Sum(Complex c1, Complex c2)
{
Complex c3;
c3.x=c1.x+c2.x;
c3.y=c1.y+c2.y;
return(c3);
}

void show(Complex c)
{
cout<<c.x<<"+"<<c.y<<"\n";
}

void main()
{
Complex A(2.7,3.5);
Complex B(1.6);
Complex C;

c=Sum(A,B);

cout<<"A= "<< show(A);
cout<<"B= "<< show(B);
cout<<"C= "<< show(C);
}
