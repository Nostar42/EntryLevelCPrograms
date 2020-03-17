#include <iostream>
using namespace std;
double getHighest(double num1, double num2, double num3);
double getLowest(double num1, double num2, double num3);
double getMiddle(double num1, double num2, double num3);
int main()
{
	double num1,num2,num3;
	cout << "enter three numbers" << endl << "First number" << endl;
		cin >> num1;
	cout << "enter second number" << endl;
		cin >> num2;
	cout << "enter third number" << endl;
		cin >> num3;
	cout << " your numbers are" << endl << num1 << endl << num2 << endl << num3 << endl << endl << endl << endl;

	cout << "The highest number is: " << getHighest(num1, num2, num3) << 
		endl;
	cout << "The middle number is: " << getMiddle(num1, num2, num3) << 
		endl;
	cout << "The lowest number is: " << getLowest(num1, num2, num3) << 
		endl;
return 0;
}

double getHighest(double num1, double num2, double num3)
{

	double hi;
	if (num1 > num2 && num1 > num3){
		hi = num1;
	}
	else if ( num2 > num1 && num2 > num3){
		hi =  num2;
	}
	else if ( num3 > num1 && num3 > num2){
		hi = num3;
	}

return hi;
}

double getLowest(double num1, double num2, double num3)
{
	double lo;
	if (num1 < num2 && num1 < num3){
		lo = num1;
	}
	else if ((num2 < num1) && (num2 < num3)){
		lo =  num2;
	}
	else if ( num3 < num1 && num3 < num2){
		lo = num3;
	}
return lo;
}

double getMiddle(double num1, double num2, double num3)
{
	double mid, lo , hi;
	lo = getLowest(num1, num2, num3);
	hi = getHighest(num1, num2, num3);
	if (num1 < hi && num1 > lo){
		mid = num1;
	}
	else if ( num2 < hi && num2 > lo){
		mid =  num2;
	}
	else if ( num3 < hi && num3 > lo){
		mid = num3;
	}

return mid;
}

