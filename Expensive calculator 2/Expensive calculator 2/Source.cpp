#include <iostream>
#include <string>
using namespace std;


int main()
{
   string nameString;

   int firstNum;
   int secondNum;
   int add;
   int subtract;
	   int multiply;
	   int divide;
	   int remainder;
	
   
	
	cout << "What is your name? ";
	cin >> nameString;

	cout << "Please enter your first number";
	cin >> firstNum;

	cout << "Please enter your second number";
	cin >> secondNum;

	add = firstNum + secondNum;
	cout << "The sum of " << "and " << secondNum << " = "<< add << endl;
    system("pause");

	subtract = firstNum - secondNum;
	cout << "The subtract of " << "and " << secondNum << " = " << subtract << endl;
	system("pause");

	multiply = firstNum * secondNum;
	cout << "The product of " << "and " << secondNum << " = " << multiply << endl;
	system("pause");

	divide = firstNum / secondNum;
	cout << "The quotient of " << "and " << secondNum << " = " << divide << endl;
	system("pause");

	remainder = firstNum % secondNum;
	cout << "The remainder of " << "and " << secondNum << " = " << remainder << endl;
	system("pause");


	return 0;

	
}