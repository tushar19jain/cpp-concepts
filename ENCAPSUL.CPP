#include<iostream.h>
#include<conio.h>
class A
{       private:
	int a,b;
	public:
		void show()
		{
			cout<<"Enter the value of a and b ->";
			cin>>a>>b;
			cout<<a<<ends<<b<<endl;
		}
		void sum()
		{
			cout<<"Enter values of A and B ->";
			cin>>a>>b;
			int sum = a+b;
			cout<<sum;
		}

	      /*  private:      //must be private
		int a,b; */
};
void main()
{
	clrscr();
	A obj;
	obj.show();
	obj.sum();
	getch();
}
