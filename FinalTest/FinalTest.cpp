#include <iostream>
using namespace std;
void main()
{
	std::cout << "Greetings, I am a calculator that will perfectly solve and addition problem you give me.\n";
	int number1 = 0 , number2 = 0;
	int sum;
	cout << "Please enter your first number";
	cin >> number1;
	cout << "Pleate enter your second number";
	cin >> number2;
	sum = number1 + number2;
		// changing from addition to subtraction does not break this
	cout << "The sum of " << number1 << " and " << number2 << " is: " << sum;
}
//Horray! I figured out how to put comments in my code, surely I will not abuse this feature.
//reminder, this should just be for a branch
//this is the final version of the code!