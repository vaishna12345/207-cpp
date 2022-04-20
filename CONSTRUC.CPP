#include<iostream.h>
#include<conio.h>
class demo
{
	int x;
	public:
		demo()//default
	{
	cout<<"\n\t the constructor with no parameter";
	}
demo(int a)//parameterised
	{
	x=a;
	cout<<"\n\tthe constructor with one parameter x="<<x;
	cout<<"\n\t suare of x is"<<x*x;
	}
demo(int a,int b)//parametrised
	{
	cout<<"\n\tthe constructor with two parameter a="<<a<<"b="<<b;
	cout<<"\n\t addition is a+b="<<a+b;
	}
demo(int a,int b,int c)//parametrised
	{
	cout<<"\n\tthe constructor with three parameter a="<<a<<"b="<<b<<"c="<<c;
	cout<<"\n\t addition is a+b+c="<<a+b+c;
	}
demo(demo & d)//copy
	{
	cout<<"\n\copy of constuctor is x=d.x="<<d.x;
	x=d.x;
	cout<<"\n\t the constructor is "<<x;
	}
};
void main()
{
	clrscr();
	demo d1;
	demo d2 (10);
	demo d3 (20,30);
	demo d4 (20,30,40);
	demo d5 (d2);
	getch();

}