#include <fstream>
#include <cstdlib>
#include <iostream>
using namespace std;

void openStreams(ifstream& fin, ofstream& fout);
void closeStreams(ifstream& fin, ofstream& fout);
void outputDays(ifstream& fin, ofstream& fout);

int main()
{
   ifstream fin;
   ofstream fout;

	openStreams(fin,fout);
	outputDays(fin,fout);
	closeStreams(fin,fout);
   
   return 0;
}

void openStreams(ifstream& fin, ofstream& fout)
{
   fin.open("days-1.txt");
   fout.open("output.txt");
}

void closeStreams(ifstream& fin, ofstream& fout)
{
   fin.close();
   fout.close();
}

void outputDays(ifstream& fin, ofstream& fout)
{
	char inp;
	int sunny=0;
	int rainy=0;
	int cloudy=0;
	
	while(!fin.eof()){
	fin >> inp;
	if(inp =='S'){
		sunny=sunny+1;		
	}
	if(inp =='R'){
		rainy=rainy+1;		
	}
	if(inp =='C'){
		cloudy=cloudy+1;		
	}	
}
fout << endl << "There are " << sunny << " sunny days.";
fout << endl << "There are " << rainy << " rainy days.";
fout << endl << "There are " << cloudy << " cloudy days.";
}
