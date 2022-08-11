#include<iostream>

using namespace std;

int main() {
	
	int m = 1, n;
	int result = 1;
	
	cout << "Enter a number: \n";
	cin >> n;
	
	while (m <= n) {
		result = result * m;
		m++;
	}

	cout << n << " factorial is " << result;

	return 0;
}