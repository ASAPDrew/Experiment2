#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cmath>
using namespace std;
	
	int main()
	{
		double pread, cread, consumtion, unpaidbalance, ccharge, tbal, tunpaid;
		const double demandcharge = 35;
		const double consumptioncharge = 1.10;
		const double latecharge = 20;
	
			cout << "Enter the meter readings in gallons during the previous month: "; cin >> pread;
			cout << "Enter the current meter readings in gallons: "; cin >> cread;
			cout << "Enter the customer's unpaid balance (Will include P20 late charge)': "; cin >> unpaidbalance;
			consumtion = abs(pread - cread);
			cout << "Consumption: (In gallons)"<< consumtion << endl;
			ccharge = demandcharge + (consumtion * consumptioncharge);
			
			cout << "Current Charge: P" << ccharge << endl;
			if (unpaidbalance > 0)
				{
					cout << "Extra payments due to unpaid balance: P" << unpaidbalance + latecharge << endl;
					tunpaid = unpaidbalance + latecharge;
					tbal = ccharge + tunpaid;
					cout << "Total Charge: P" << tbal;
				}
			else
				{
					tbal = ccharge + unpaidbalance;
					cout << "Total Charge: P" << tbal;	
				}
	getch();
	return 0;

	}
	

