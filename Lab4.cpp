#include <iostream>
using namespace std;

void whileLoop();
void doWhileLoop();
void forLoop();

int main()
{

   int snum;
   cout << "Enter 1, 2, or 3" << endl;
   cin >> snum;
   cout << endl << endl;

   switch(snum){
	case 1: whileLoop();
		break;
	case 2: doWhileLoop();
		break;
	case 3: forLoop();
		break;
	default: cout << "Invalid Input" << endl;

   }
   return 0;
}

void whileLoop()
{
   int i = 1;
   while (i<=10){
   	cout << i << endl;
   	i=i+1;
   }
}

void doWhileLoop()
{
   int j=1;
   do{
   	cout << j << endl;
   	j=j+2;
   } while (j<=20);
}

void forLoop()
{
   for( int k = 3; k <= 30; k = k + 3 ) {
   	cout << k << endl;
   }
   
}
