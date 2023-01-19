#include<iostream.h>
#include<conio.h>
class A
{
	int n;
	public:
	void input()
	{
		cout<<"Enter value";
		cin>>n;
	}
	void show()
	{
		cout<<n<<endl;
	}
};
class B: virtual public A
{

};
class C:virtual public A
{

};
class D:public B,public C
{

};
void main()
{
	clrscr();
	A ob1; B ob2; C ob3; D ob4;
	ob1.input();
	ob1.show();

	ob2.input();
	ob2.show();

	ob3.input();
	ob3.show();

	ob4.input();
	ob4.show();
	getch();
}
