#include<iostream.h>
#include<conio.h>
template<class T>
void swap(T &x, T&y)
{
   T t;
   t = x;
   x = y;
   y =t;
}
void main()
{
clrscr();
// CHAR SWAP
char ch1,ch2;
cout<<"Enter any two characters : ";
cin>>ch1>>ch2;
cout<<ch1<<ends<<ch2<<endl;
swap(ch1,ch2);
cout<<ch1<<ends<<ch2<<endl;
// INTEGERS SWAP
int num1,num2;
cout<<"Enter any two integers : ";
cin>>num1>>num2;
cout<<num1<<ends<<num2<<endl;
swap(num1,num2);
cout<<num1<<ends<<num2<<endl;
// FLOATING POINT SWAP
float f1,f2;
cout<<"Enter any two floating numbers: ";
cin>>f1>>f2;
cout<<f1<<ends<<f2<<endl;
swap(f1,f2);
cout<<f1<<ends<<f2;
getch();
}