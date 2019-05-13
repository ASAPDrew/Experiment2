#include <iostream>
#include <conio.h>
using namespace std;

	int main()
	{
		cout << "Lets count by 1s until 10! then lets count by 2s until 30! \n";
		int x;
		
		for (x = 1 ; x < 10 ; x++)	
		{
			cout<< x;
			cout<< ", ";
		}
		
		while (x <= 28) 
		{
			cout << x << ", ";
			x = x + 2;
		}
		
		if (x == 30)
		{
			cout << x;
			x= x+2;
		}
		
		getch();
		return 0;
	}
