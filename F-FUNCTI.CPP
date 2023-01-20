// Friend Function
#include<iostream.h>
#include<conio.h>
class A
{
	int a,b;
	public:
		void input()
		{
			cout<<"Enter values";
			cin>>a>>b;
		}
		friend void add(A obj);
};
void add(A obj)
{
	int c;
	c = obj.a+obj.b;
	cout<<"sum = "<<c;
}
int main()
{
	clrscr();
	A ob;
	ob.input();
	add(ob);
	getch();
	return 0;
}