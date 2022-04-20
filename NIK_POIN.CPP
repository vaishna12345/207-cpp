//pointer program c++

#include<iostream.h>
#include<conio.h>
void main()
{
	int a=4;
	int *p;
	clrscr();
	p=&a;
	cout<<"address of a="<<&a<<endl;

	cout<<"address of a="<<p<<endl;

	cout<<"value of address p ="<<*p<<endl;

	cout<<"address of p="<<&p;
	getch();

}