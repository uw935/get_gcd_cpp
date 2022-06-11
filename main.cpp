#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int getGCD(int a, int b);

int main() {
		
	int firstnum, secondnum;

	while (true) {
		cout << "1 - exit" << endl;
		cout << "Enter first nubmer: ";
		cin >> firstnum;

		if (firstnum == 1) {
			break;
		}

		cout << "Enter second nubmer: ";
		cin >> secondnum;

		cout << "\nGreatest common divisor of numbers: " << getGCD(firstnum, secondnum) << endl;
		cout << "\n\n";
	}
	
	return 0;

} 

int getGCD(int a, int b) {
	do {
		if (a > b) {
			a = a - b;
		}
		else {
			b = b - a;
		}
			
	} while (a != b);

	return a;
}