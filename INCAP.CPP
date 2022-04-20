#include<iostream.h>
#include<conio.h>
class stud
{
     int m1,m2,roll no,total;
     float avg;
     char name[20];

     public:
     void get()
     {
	cout<<"\n enter the no:\t";
	cin>>roll no;
	cout<<"\n enter the name:\t";
	cin>>name;
	cout<<"\n enter the marks in sub 1:\t";
	cin>>m1;
	cout<<"\n enter the marks in sub 2:\t";
	cin>>m2;
	}
	void put()
	{
	total=0
	total=m1+m2;
	avg=(float)total/2;
	cout<<"\n output is:\t";
	cout<<"roll no"<<roll no;
	cout<<"name"<<name;
	cout<<"marks sub1"<<m1;
	cout<<"marks sub2"<<m2;
	cout<<"total marks:"<<total;
	cout<<"average:"<<avg;
	}
     };
     void main()
     {
	  clrscr();
	  stud s;
	  s.get;
	  s.put;
	  getch();
     }