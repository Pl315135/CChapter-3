#include <string>
#include <iostream>
using namespace std;

int main()
{
		 int dozenEggs;
		 int remainingEggs;
		 double dozenEggsCost = 2.00;
		 double remainingEggCost = 0.25;
		 int eggsTotal;
		 double eggsCost;
  
		 cout << " How many dozen eggs do you like ? " << endl;
		 cin >> eggsTotal;

		 dozenEggs = eggsTotal / 12;
		 remainingEggs = eggsTotal % 12;

		 eggsCost = dozenEggs * dozenEggsCost + remainingEggs * remainingEggCost;

		 cout << "You ordered " << eggsTotal << "Eggs. Thats" << dozenEggs
			 << " dozen eggs at$" << dozenEggsCost << " per dozen and " << remainingEggs << " remaining eggs at "
			 << remainingEggCost << " cents each for a total of " << eggsCost << endl;

		 system("pause");
		 return 0;




}


