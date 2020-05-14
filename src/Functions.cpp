/*
 * Functions.cpp
 *
 *  Created on: Jul 18, 2017
 *      Author: Charlotte Dye
 */

#include <iostream> //for cout and endl

//Definition of doPrint: note we don't need to separately declare
void doPrint()
{
	std::cout << "In doPrint()" << std::endl;
}


int main()
{
	std::cout << "Starting main()" << std::endl;
	doPrint();
	std::cout << "Ending main()" << std::endl;

	std::cout << 7 + 9 << std::endl; //This prints 16 because it actually adds the values

	return 0; //main should return 0 or maybe a status
	//I'm right: the 0 is a status code.  0 is success and a positive value is failure
	//For now, define main function at the bottom of code file
	//Nested functions are not a thing in C++

	//a function parameter is a variable used in a function where the value is provided by the caller of the function
	//an argument is a value that is passed FROM the caller to the function when a function call is made

	//Value of arguments copied into matching parameter: pass by value
}
