/*
** This is a program that allows a user to enter their name and get a return greeting
** Programmer: Nicole Sippy Date:9/21/12
*/

#include <stdio.h>

int main ()

{
//local declarations

	char fName[16]; //First Name
	char lName[20]; //Last Name
	
	//Statements
	printf("Please enter your first name");
	scanf("%s", &fName);
	printf("Please enter your last name")
	scanf("%s", &lName);	
	
	printf("Hello, %s %s, fName lName);

	return (0);
}

