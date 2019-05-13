#include <iostream>
#include <conio.h>
using namespace std;

	int main()
	{
		int hoursuse, extrahours, extrahourdue, totaldue;
		char package;
		
		const int packageA = 995;
		const int packageB = 1495;
		const int packageC = 1995;
		
		cout << "Good day! These are our packages offered: \n";
		cout << "Package A: For P995/mo 10 hrs of access are provided. Additional hours are P20/hr. \n";
		cout << "Package B: For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr. \n";
		cout << "Package C: For P1995/mo of unlimited access is provided. \n";
		cout << "";
		cout << "Please enter the capital letter of your package choice:";
		cin >> package;
		switch (package)
		
		{
			case 'A':
			cout << "You have chosen package A! \n";
			cout << "Enter the number of hours you've used this service:"; cin >> hoursuse;
			
			if (hoursuse > 10)
			{
				extrahours = hoursuse - 10;
				extrahourdue = extrahours * 20;
				totaldue = packageA + extrahourdue;
				cout << "The total amount due for the month is: P" << totaldue << endl;
			}
			else if (hoursuse <= 10)
				cout << "The total amount due for the month is: P" << packageA << endl;
			break;
			
			case 'B':
			cout << "You have chosen package B! \n";
			cout << "Enter the number of hours you've used this service:"; cin >> hoursuse;
			
			if (hoursuse > 20)
			{
				extrahours = hoursuse - 20;
				extrahourdue = extrahours * 10;
				totaldue = packageB + extrahourdue;
				cout << "The total amount due for the month is: P" << totaldue << endl;
			}
			else if (hoursuse <= 20)
				cout << "The total amount due for the month is: P" << packageB << endl;
			break;
			
			case 'C':
			cout << "You have chosen package A! \n"
			"The total amount due for the month is: P" << packageC << endl;
			break;
			
			default: 
			cout << "Input invalid";
		 }
	getch();
	return 0;
	}
