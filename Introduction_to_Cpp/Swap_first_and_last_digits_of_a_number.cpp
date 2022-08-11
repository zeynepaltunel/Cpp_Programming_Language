#include<iostream>

using namespace std;

int main() {

	int n = 0, a, first, last, temp;

	cout << "Enter a number:" << endl;
	cin >> a;

	temp = a;
	last = temp % 10;

	while (temp != 0) {
		temp = temp / 10;
		n++;
	}

	temp = a;

	while (temp != 0) {
		first= temp % 10;
		temp = temp / 10;
	}

	a = a - last;
	a = a + first;

	a = a - (first * pow(10,(n - 1)));
	a = a + (last * pow(10, (n - 1)));

	cout << a;

	return 0;
}