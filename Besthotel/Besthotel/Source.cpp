//Author Phero Luong
//Date 08/30/2018
#include <iostream>
#include <string>
using namespace std;

	int main()
	{
	string userName;
	double totalBill = 0.0;
	double dayStayed = 0.0;
	double roomCharge = 100.0;
	double internetCharge = 10.0;

	cout << "Enter your Name: ";
	cin >> userName;

	cout << "How many days are you staying: ";
	cin >> dayStayed;


	totalBill = (roomCharge + internetCharge) * dayStayed;

	cout << userName << " Your total bill is: $ " << totalBill << endl;

	system("pause");
	return 0;
	}


