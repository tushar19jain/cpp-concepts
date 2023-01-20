// operator overloading
/* operator that can't be overloaded
 1  .
 2 ::
 3 ?:
 4 sizeof()
 types of over loading
 1 - Unary ol
 2- Binary ol
				OVERLOADING
				     |
			 |-----------|-----------|
		     Fuction                  Operator
		     overloading              overloading
						  |
					   _______|________
					   |              |
					   |              |
					Unary           Binary
					  |                |
					  |                |_______
				  _______ |________               |
				  |               |               |
				Class          Friend     ________|________
				fuction       fuction    |                 |
									Friend
						       Class            fuction

						       fuction */

// U N A R Y  O P E R A T O R   W I T H   C L A S S  F U N C
#include<iostream.h>
#include<conio.h>
/*
class demo
{
	int a,b;
	public:
		demo(int x,int y)
		{
			a=x;
			b=y;
		}
		void show()
		{
			cout<<a<<ends<<b<<endl;
		}
		void operator -()
		{
			a=-a;
			b=-b;
		}
};
void main()
{
	clrscr();
	demo obj(10,-20);
	obj.show();
	- obj;
	obj.show();
	getch();
} */

// U N A R Y  O P E R A T O R   W I T H   F R I E N D   F U N C

#include<iostream.h>
#include<conio.h>
class demo
{
	int a,b;
	public:
		demo(int x,int y)
		{
			a=x;
			b=y;
		}
		void show()
		{
			cout<<a<<ends<<b<<endl;
		}
		friend void operator -(demo &obj);
};
void operator -(demo &obj)
{
	obj.a=-obj.a;
	obj.b=-obj.b;
}
void main()
{
	clrscr();
	demo obj(10,-20);
	obj.show();
	- obj;
	obj.show();
	getch();
}
