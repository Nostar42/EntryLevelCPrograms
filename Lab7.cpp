#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <fstream>
using namespace std;

//computer picks number 1-100
void computer(int& compPick);
//player picks number 1-100
void player(int& playerPick);
void setPlayerTurn(bool& player1Turn, int& compPick, int& playerPick);
//compare numbers and output reseults
void results(int playerPick, int compPick, ofstream& fout);
//play until player quits
void getQuit(char& quit);
void playGame(int& playerPick, int& compPick, bool& player1Turn, char& quit, ofstream& fout);
//output reseults to a text file and generate a webpage


int main (){
	int compPick=0;
	int playerPick=0;
	bool player1Turn = false;
	char quit = ' ';
	
	ofstream fout;
	fout.open("output.html");
	if (fout.fail()){
		cout<< "input file opening failed.\n";
		exit(1);
	}
	
	
	
	
	srand(time(0));
	playGame(playerPick,compPick,player1Turn,quit,fout);
	return 0;
}

void playGame(int& playerPick, int& compPick, bool& player1Turn, char& quit, ofstream& fout){
	fout << "<html><head></head><body>";
	fout << "<table>" << endl;
	fout << "<tr><td>Player 1 Pick</td><td>Computer Pick</td><td>Distance</td></tr>" << endl;
	
	while(quit != 'Q' && quit !='q'){
	do{
	setPlayerTurn(player1Turn, compPick, playerPick);
	}while(player1Turn);
	
	results(playerPick, compPick, fout);
	getQuit(quit);	
	}
	fout << "</table></body></html>";		
}

void computer(int& compPick){
	compPick = (rand() % 100)+1;
}
void player(int& playerPick){
	cout << "pick a number from 1-100\n";
	cin >> playerPick;
}
void setPlayerTurn(bool& player1Turn, int& compPick, int& playerPick){
	if(player1Turn)
	{
		player(playerPick);
		player1Turn = false;
	}
	else
	{
		computer(compPick);
		player1Turn = true;
	}
}

void results(int playerPick, int compPick, ofstream& fout){
	int closeness = abs(playerPick - compPick);
	fout << "<tr><td>" << playerPick << "</td><td>" << compPick << "</td><td>" << closeness << "</td></tr>";

}
void getQuit(char& quit){
	cout<< "press Q or q to quit, or any other key to play again.\n";
	cin >> quit;
}

