#include<iostream.h>
#include<conio.h>
class A
{       int n,n2;
	public:
		void fun()
		{
		 n = 30,n2=40;
		 int sum = n + n2;
		 cout<<n<<ends<<"+"<<ends<<n2<<ends<<"="<<ends<<sum<<endl;
		}
		void fun(int a,int b)
		{
		 int sub = a-b;
		 cout<<a<<ends<<"-"<<ends<<b<<ends<<"="<<ends<<sub<<endl;
		}
};
int main()
{
	clrscr();
	A obj;
	obj.fun();
	obj.fun(40,10);
	getch();
	return 0;
}
