#include<iostream>

using namespace std;

int main(){

	float a,b;

	cout << "Enter a temperature in fahrenheit:\n";
	cin >> a;

	b = (static_cast<float>(5)/9) * (a - 32);
	
	cout << b;

	cout << a << " Fahrenheit is " << b << " Celsius.";

	return 0;
}
