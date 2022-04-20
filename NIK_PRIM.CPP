//p program
#include<iostream.h>
#include<conio.h>
void main()
{
	int no,i,d=0;
	clrscr();
	cout<<"enter number=>";
	cin>>no;
	for(i=1;i<=no;i++)
	{
		if(no%i==0)
		{
		    d++;
		}

	}
	if(d==2)
	{
	     cout<<"number is prime number";
	}
	else
	{
	     cout<<"not a prime number";
	}
	getch();

}