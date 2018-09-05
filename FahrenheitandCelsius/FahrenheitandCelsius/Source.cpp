#include <string>
# include <iostream>
using namespace std;

int main()
{
	double celsius8am;
	double celsius12pm;
	double celsius5pm;

	double farhen8am;
	double farhen12pm;
	double farhen5pm;

	cout << "What is the temperature in celsius at 8 AM ";
	cin >> celsius8am;

	cout << "What is the temperature in celsius at 12 AM ";
	cin >> celsius12pm;

	cout << "What is the temperature in celsius at 12 AM ";
	cin >> celsius12pm;

	farhen8am = celsius8am * 1.8 + 32;
	farhen12pm = celsius12pm * 1.8 + 32;
	farhen5pm = celsius5pm * 1.8 + 32;

	cout << "The temperature at 8:00 AM in Fahrenheit is " << farhen8am << endl;
	cout << "The temperature at 12:00 PM in Fahrenheit is " << farhen12pm << endl;
	cout << "The temperature at 5:00 PM in Fahrenheit is " << farhen5pm << endl;
	
	system("pause");
	return 0;


}