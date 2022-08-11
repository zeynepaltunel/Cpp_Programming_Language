#include<iostream>

using namespace std;

int main() {

	int n = 0, a;

	cout << "Enter a number: \n";
	cin >> a;

	while (a > 0) {
		a = a / 10;
		n++;
	}

	cout << "Number of digits is " << n;

	return 0;
}