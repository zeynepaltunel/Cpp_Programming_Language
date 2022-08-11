#include<iostream>

using namespace std;

int main() {

	int a = 1;
	int b;

	while (a < 11) {
		b = 7 * a;
		cout << "7 x " << a << " = " << b << "\n";
		a++;
	}
	return 0;
}
