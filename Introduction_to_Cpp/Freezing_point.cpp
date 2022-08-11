#include <iostream>

using namespace std;

int main() {

	int a;

	cout << "Enter a temperature: \n";
	cin >> a;

	if (a < 0) {
		cout << "Temperature is below the freezing point.";
	}

	else if (a > 0) {
		cout << "Temperature is above the freezing point.";
	}
	else {
		cout << "Temperature at freezing point.";
	}

	return 0;
}
