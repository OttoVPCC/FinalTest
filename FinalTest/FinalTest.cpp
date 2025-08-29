#include <iostream>
using namespace std;
void main()
{
	std::cout << "Please enter information:\n";
	int number1 = 0, number2 = 0;
	int sum;
	cout << "Enter the customers maximum credit";
	cin >> number1;
	cout << "Enter the amount of credit used by the customer";
	cin >> number2;
	sum = number2 - number1;
	// changing from addition to subtraction does not break this
	cout << "Given your maximum credit of " << number1 << " and your used credit of" << number2 << " your available credit is: " << sum;