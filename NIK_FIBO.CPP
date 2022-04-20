//c++ fibonacci series program
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{
   int t1,t2,next_no,no;
   clrscr();
   cout<<"enter number=>";
   cin>>no;
   cout<<"fibonacci series are=>"<<endl;
   t1=0;
   t2=1;
   next_no=t1+t2;
   cout<<t1<<endl;
   cout<<t2<<endl;
   while(next_no<no)
   {
       cout<<next_no<<"\n";
       t1=t2;
       t2=next_no;
       next_no=t1+t2;
   }
   getch();

}