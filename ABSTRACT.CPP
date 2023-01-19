/* ABSTRACTION ->
   |
   |
   -> Class
   |
   |
   -> Headerfile
   |

   /* class classname
   {
	private:
		int a;
	public:
		void show()
		{
			cout<<a;
		}
   };
   main()
   {
   A obj; -> Can only be accessed by class member function.
   obj.show();
   }


   -> Using headerfile
   #include<math.h>
   #include<iostream.h>
   main()
   {
	int a = 4,b;
	b=Sqrt(a);-> The working or logic of Sqrt() is hidden in math.h
	cout<<b;
   }