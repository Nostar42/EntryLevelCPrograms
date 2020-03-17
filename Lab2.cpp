#include <iostream>
#include <cmath>

using namespace std;

int main()
{

   char myChar;
   cout << "input Character: ";
   cin >> myChar;
   cout << "The Letter before is " << char(myChar-1) << " " << endl;
   cout << "My letter is "  << myChar << "  " << endl;
   cout << "The Letter after is " << char(myChar+1) << " " << endl << endl;

   int myint;
   int otherint;
   cout<< "please enter 2 intergers seperate by a space" << endl;
   cin >> myint >> otherint;
   cout << "addition:" << myint << "+" << otherint << "=" << double(myint+otherint) << endl;
   cout << "minus:" << myint << "-" << otherint << "=" << double(myint-otherint) << endl;
   cout << "multiply:" << myint << "x" << otherint << "=" << double(myint*otherint) << endl;
   cout << "divide:" << myint << "/" << otherint << "=" << double(myint/otherint) << endl;
   cout << "remainder:" << myint << "%" << otherint << "=" << double(myint%otherint) << endl << endl;
   
   double thisone;
   double thatone;
   double theotherone;
   cout << "Please enter two decimal numbers separated by a space" << endl;
   cin >> thisone >> thatone;
   theotherone = thisone+thatone;
   cout << "the total is:" << theotherone << endl;
   cout << "the total rounded down is:" << floor(theotherone) << endl;
   cout << "the total rounded up is:" << ceil(theotherone) << endl;
   
   
   return 0;
}

