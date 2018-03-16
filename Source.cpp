#include <iostream>
using namespace std;

//This is practice program that ask users for a number to enter without entering the specified number. Just run the program and see. 

int main() {
	char stay;
	bool askUser = true;
	int userNum;
	int howManyLoops = 0;
	
	while (askUser == true) {
		cout << "Enter any number besides " << howManyLoops << ": ";
		cin >> userNum;
		
		if (userNum== howManyLoops) {
			cout << "You were not supposed to enter " << howManyLoops << " !" << endl;
			askUser = false;
		}
		if (howManyLoops >= 10) {
			cout << "Wow you're more patient than I am, you win" << endl;
			askUser = false;
		}
		howManyLoops++;
	}
	cin >> stay;
	return 0;
}
