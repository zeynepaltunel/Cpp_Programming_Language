#include<iostream>

using namespace std;

int main() {

	int a, first, last;

	cout << "Enter a number: \n";
	cin >> a;

	last = a % 10;

	while (a != 0) {
		first = a % 10;
		a = a / 10;
	}
	cout << "First digit is " << first << "\n";
	cout << "Last digit is " << last;

	return 0;
}