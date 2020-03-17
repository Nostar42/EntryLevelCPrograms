#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;
/*
RULE 1:
there are 6 function calls in int main. as you write your functions, uncomment the
associated function call to test it.
NO CHANGES ARE TO BE MADE TO ANYTHING INSIDE INT MAIN.
if your function is written correctly, the uncommented function calls should just work.
RULE 2: function DECLARATIONS at the TOP of the file
function DEFINITIONS at the BOTTOM of the file

write a function called multiply. this function takes in 2 integers as parameters and returns the result of multiplying them together.

you've done this one before: write a function, getHighest,  that takes in 3 doubles as parametrsand returns the highest double.

write a function called raise. this function takes in 2 integers as paramters:
a number, and the power to which you want to raise it. for example, if you want to raise 2 to the 3rd power the paramters would be 2 and 3 and the result would be 8

write a function, roundDown that takes in a double as a parameter, rounds it DOWN to the nearest whole number, and returns that number as an integer.

write a function, roundUp that takes in a double as a parameter, rounds it UP to the nearest whole number, and returns that number as an integer.

write a function upperCase that takes in a character as a parameter and if the character was lowerscae, returns the uppercase version

*/
int multiply(int num1, int num2);
double getHighest(double num1, double num2, double num3);
double raise(double num1, double num2);
int roundDown(double num1);
int roundUp(double num1);
char upperCase(char char1);


int main()
{
cout << "the rest of the multiply function is " << multiply(3, 6) << endl;
cout << "the rest of the highest function is " << getHighest(32, 48, 2) << endl;
cout << "the rest of the raise function is " << raise(3, 5) << endl;
cout << "the rest of the rounding up function is " << roundDown(2.8) << endl;
cout << "the rest of the rounding down function is " << roundUp(3.1) << endl;
cout << "the rest of the uppercase function is " << upperCase('a') << endl;

return 0;
}

int multiply(int num1, int num2){
	return num1*num2;
}

double getHighest(double num1, double num2, double num3){
	double highest = num1;
	if(num2>num1 && num2>num3){
		highest = num2;
	}
	if(num3>num2 && num3>num1){
		highest = num3;
	}
	return highest;
}

double raise(double num1,double num2){
	return pow(num1,num2);
}
int roundDown(double num1){
	return floor(num1);
}
int roundUp(double num1){
	return ceil(num1);
}
char upperCase(char char1){
	return toupper(char1);
}


