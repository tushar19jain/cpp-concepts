#include<iostream.h>
#include<conio.h>
class A
{
	int a;
	public:
      /*	A()
	{
		a=100;
	} */
	void show()
	{
	cout<<a;
	}
};
void main()
{
	clrscr();
	A obj; // default const give -> 7605
   //	A obj=A(); -> it gives 100
	obj.show();
	getch();
}