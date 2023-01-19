#include<iostream.h>
#include<conio.h>
class A
{
	public:
		void fun()
	     // virtual void fun()
		{
			cout<<"Tushar"<<endl;
		}
};
class B:public A
{
	public:
		void fun()
		{
			cout<<"Jain"<<endl;
		}
};
int main()
{
	clrscr();
	B obj;
	A *ptr;
	ptr =&obj;
	ptr->fun();
       //	obj.A::fun();
	obj.fun();
	getch();
	return 0;
}