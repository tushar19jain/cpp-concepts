#include<iostream.h>
#include<conio.h>
class Test
{       int n;
	public:
	Test()
	{
		n= 10;
		cout<<n<<endl;
	}
	~Test()
	{
	cout<<"Object Destroyed"<<endl; //Turbo C++ -> Window -> Output
	cout<<n<<endl;
	}
};
void main()
{       clrscr();
	Test obj,obj1;
	getch();
}