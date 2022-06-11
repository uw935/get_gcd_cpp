#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int getGCD(int a, int b);

int main() {
		
	int firstnum, secondnum;

	cout << "Hello! Type two nubmer: ";
	cin >> firstnum  >>  secondnum ;

	cout << getGCD(firstnum, secondnum) << endl;

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