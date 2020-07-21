#include<iostream>
using namespace std;
int main() {
	int fact=1;
	int number;
	cout << "Enter a number: ";
	cin >> number;

	for (int i = 1; i <= number; i++) {
		fact *= i;
	}
	cout << "factorial of" << number << "is." << fact;
}