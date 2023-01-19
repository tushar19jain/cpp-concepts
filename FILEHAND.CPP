/* Files mainly deals with 3 classes
	fstream,ofstream,ifstream -> <fstream.h>
		  |          |
		  |	     |
		  |	     |
		  ->         -> Read info from file
	Write something
	   into file */

#include<conio.h>
#include<iostream.h>
#include<fstream.h>
void main()
{
	ofstream ofn;
	ofn.open("File.txt");
	ofn.close();
	getch();
}
