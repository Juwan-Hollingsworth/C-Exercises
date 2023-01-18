/* include iostream bc we need input/output libraries*/
#include <iostream>

/* main f(x) = main entry point of the program */
int main() 
{

/* declare variables */
int favorite_number;

/* 
- prompt user to enter favorite # 
 cout writes to the console
 '<<' = The insertion operator 
 */
std::cout << "Enter your favorite number between 1 and 100:";

/*
cin reads from the console 
'>>' = The extraction operator 
*/
std::cin >> favorite_number;

std::cout << "Amazing! That's my favorite number too! " << std::endl;

std::cout << "No really!!, ";

std::cout << favorite_number;

std::cout << " is my favorite number too! ";


/* 
main f(x) returns an interger 
 return 0 if no errors */
return 0;
}