#include <iostream>

using namespace std;

int main() {

	float const pi = 3.14;
	float r,area;

	cout << "Enter a radius: \n";
	cin >> r;

	area = pi * r * r;

	cout << area;

	return 0;
}