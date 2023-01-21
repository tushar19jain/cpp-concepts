// E X C E P T I O N   H A N D L I N G
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b,c;
	cout<<"Enter the value of a and b :";
	cin>>a>>b;
	try
	{
		if(b==0)
		{
			throw(b);
		}
		else
		{
			c=a/b;
			cout<<"Answer : ";<<ends<<c;
		}
	}
	catch(int x);
	{
		cout<<"Can't divide by"<<ends<<x;
	}
getch();
}