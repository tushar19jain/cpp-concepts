#include<iostream.h>
#include<conio.h>
/* syntax class-name(class-name &ref)
		    {
		     //body
		    } */
class A
{
	int a,b;
	public:
		A(int x,int y)
		{
		      a= x;
		      b= y;
		}
		A(A &ref)
		{
		       a= ref.a;
		       b= ref.b;
		}
		void show()
		{
			cout<<a<<ends<<b<<endl;
		}
};
void main()
{
	clrscr();
	A obj(20,30);
	A obj2=obj;
	obj.show();
	obj2.show();
	getch();
}
