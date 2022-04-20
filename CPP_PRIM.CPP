#include<iostream.h>
#include<conio.h>
void main()
{
	 int num,i,j=0;
	 clrscr();
	 cout<<"enter number :";
	 cin>>num;

	 for(i=1;i<=num;i++)
	 {
		if((num%i)==0)
		{
		     j++;
		}
	 }

	 if(j==2)
	 {
	      cout<<num<<"number is prime";
	 }
	 else
	 {
	      cout<<"number is not prime";
	 }
	 getch();

}