#include <iostream>

using namespace std;

int main() {

	int number;

	cout << "Enter a number: \n";
	cin >> number;

	if (number % 2 == 0) {
		cout << "Entered number is even. \n";
	}
	else {
		cout << "Entered number is odd. \n";
	}

	return 0;
}
