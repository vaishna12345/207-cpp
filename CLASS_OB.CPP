//program using class and object

#include<iostream.h>
#include<conio.h>
class student
{
	public:
	int roll_no;
	char name[20];
	void display()
	{
	      cout<<"inside class";
	}
};
void main()
{
	student s;
	clrscr();
	cout<<"enter roll no"<<endl;
	cin>>s.roll_no;
	cout<<"enter name;"<<endl;
	cin>>s.name;
	cout<<"roll no="<<s.roll_no<<endl;
	cout<<"name ="<<s.name<<endl;
	s.display();
	getch();
}