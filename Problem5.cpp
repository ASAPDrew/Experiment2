#include <iostream>
#include <conio.h>
using namespace std;

	int main()
	{
    	int a1, b2, x;
    	
    	a1=0;
    	b2=1;
    	x=0;

    	cout << "the next 20 Fibonacci numbers (after 0 and 1):\n";
    
    	while (x<=10)
    	{
    	 cout << a1 << ", " << b2 ;
     		if (x<10)
     			cout<< ", ";
     			a1 = a1 + b2;
     			b2 = a1 + b2;
				x++;
    	}
    	
    	getch();
    	return 0;
}
