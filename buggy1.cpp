#include <iostream>
#include <string>
using namespace std;


int main()
{
	string nameString;
	
	int aFirst;   
    int bSecond;
	int add;
	int subtract;
	int divide;
	int multiply;
	int remainder;





	cout << "What is your name ? ";
	cin >> nameString;

	cout << "Enter the first number ";
	cin >> aFirst;

	cout << "Enter the second number ";
	cin >> bSecond;

	add = aFirst + bSecond;
	cout << "The sum of " << aFirst << " and " << bSecond << " = " << add << endl;
	system("Pause");
	
	subtract = aFirst - bSecond;
	cout << "The subtract of " << aFirst << " and " << bSecond << " = " << subtract << endl;
	system("Pause");
	
	multiply = aFirst * bSecond;
	cout << "The product of " << aFirst << " and " << bSecond << " = " << multiply << endl;
	system("Pause");
	
	divide = aFirst / bSecond;
	cout << "The quotient of " << aFirst << " and " << bSecond << " = " << divide << endl;
	system("Pause");
	
	remainder = aFirst % bSecond;
	cout << "The remainder of " << aFirst << " and " << bSecond << " = " << aFirst % bSecond << endl;
	system("Pause");
	
	return 0;

}