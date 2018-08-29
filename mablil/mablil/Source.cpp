#include <iostream>
#include <string>
using namespace std;

int main()
{
  int firstNum;
  int secondNum;
  int c;
  
  string color;
  string bodypartPlural;
  string wordendinginEst;
  string noun;
  string pluralNoun;
  string animal;

  

  cout << "Please enter a color ";
  cin >> color;

  cout << "Please enter a world ending in est  ";
  cin >> wordendinginEst;

  cout << "Please enter the first number ";
  cin >> firstNum;

  cout << "Please enter the second number ";
   cin >> secondNum;

   c = firstNum - secondNum;

  cout << "Please enter a body part plural";
  cin >> bodypartPlural;

  cout << "Please enter a animal ";
  cin >> animal;

  cout << "Please enter a noun ";
  cin >> noun;

  cout << "Please enter a plural noun ";
  cin >> pluralNoun;


  
  cout << color << "The Dragon" << wordendinginEst << "Dragon of all. It has " << c
	  << " " << bodypartPlural << ",and a " << animal << "shaped like a" << noun << ".It loves to eat" << pluralNoun
	  << ",although it will feast on nearly anything." << endl;
	
  system ("pause");
  return 0;
}



