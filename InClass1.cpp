//==========================================================================================
//Name	     :	Nicole Sippy
//Author     :  Helena Martellaro
//Version    :  1.0
//Description:  Page 118, Week 2 Assignments
//==========================================================================================

#include <iostream> 
#include <string>
using namespace std;

//include statement(s)
//using namespace statement

int main()
{
	//variable declaration
	int SECRET = 1;
	double RATE = 12.50;
	double newNum, num1, num2, newerNum;
	string name;
	double wages;
	double hoursWorked;
	
	//executable statements
	cout << "Please enter the first number: "<< flush;
	cin >> num1;
	cout << "Please enter the second number: " << flush;
	cin >> num2;

	cout << "The value of the first number = " << num1 <<
		" and the value of the second number = " << num2 << "." << endl;

	newNum = (num1 * 2) + num2;

	cout << "\nThe new number value is " << newNum << endl;

	newerNum = SECRET + newNum;

	cout << "The new value of newNum is " << newerNum << endl;

	cout << "\nPlease enter your last name: " << endl;
	cin >> name;
	
	cout << "Please enter a decimal between 0 and 70: " << endl;
	cin >> hoursWorked;
	
	wages = RATE * hoursWorked;

	cout << "\nName: " << name << endl;
	cout << "Pay Rate: $" << RATE << endl;
	cout << "Hours Worked: " << hoursWorked << endl;
	cout << "\nSalary: $" << wages << endl;

	// return statement
	return 0;
}
