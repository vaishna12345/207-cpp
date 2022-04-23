#include<iostream.h>
#include<conio.h>

 template <class T>
 T max (T a, T b)
 {
 if(a>b)
 return a;
 else
 return b;
 }
 void main()
 {
 clrscr();
 char ch1,ch2,ch3;
 cout<<"\n enter two characters:";
 cin>>ch1>>ch2;
 cout<<"\n----------------\n";
 cout<<"\n maximum integer is:\n";

 ch3=max(ch1,ch2);

 cout <<"\nch3:\t"<<ch3;

 cout<<"\n-----------------\n";
 int a,b,c;
 cout <<"\nenter two integers :\n";
 cin>>a>>b;
 cout <<"\n maximum integers is : \n";
 cout<<"\n maximum integers is: \n";

 c=max(a,b);

 cout<<"\n c:\t"  <<c;

 getch();

}
