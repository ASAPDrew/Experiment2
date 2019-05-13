#include <iostream>
#include <conio.h>
using namespace std;

	int main()
	{
		int n, ans;
		n = 1;
		
		while (n != 0)
		{
			cout << "Enter a number and get the sum of all whole numbers starting from 1 to that number! \n";
			cout << "Enter a number here: "; 
			cin >> n;		
			if (n >= 0)
				{
				ans = (n * (n + 1) ) / 2;
				cout << "The sum of all the whole numbers from 1 to " << n << " is " << ans << ".\n";	
				}
			else
			break;
		}
			
		cout << "Done, thank you!";	
		getch();
		return 0;
	}
