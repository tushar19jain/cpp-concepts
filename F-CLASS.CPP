// Friend Class
#include<iostream.h>
#include<conio.h>
class A
{
	int a,b;
	public:
		void input()
		{
			cout<<"Enter the values:";
			cin>>a>>b;
		}
		friend class B;
};

class B
{
	int c;
	public:
		void add(A obj)
		{
			c=obj.a+obj.b;
			cout<<endl<<"C="<<c;

		}
};

void main()
{
	clrscr();
	A oo; B kk;
	oo.input();
	kk.add(oo);
	getch();
}
