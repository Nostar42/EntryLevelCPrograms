//		 _________                                                          __________                  __               .__              
//		 \_   ___ \_____    _____   ___________  ____   ____                \______   \_____    _______/  |_  ___________|__|__ __  ______
//		 /    \  \/\__  \  /     \_/ __ \_  __ \/  _ \ /    \                |     ___/\__  \  /  ___/\   __\/  _ \_  __ \  |  |  \/  ___/
//	 	 \     \____/ __ \|  Y Y  \  ___/|  | \(  <_> )   |  \               |    |     / __ \_\___ \  |  | (  <_> )  | \/  |  |  /\___ \ 
//	 	  \______  (____  /__|_|  /\___  >__|   \____/|___|  /               |____|    (____  /____  > |__|  \____/|__|  |__|____//____  >
//	             \/     \/      \/     \/                  \/                               \/     \/                                  \/

#include <iostream>
using namespace std;

void displayInstructions();
void setPlayer1(char& player1choice);
void setPlayer2(char& player2choice);
char getPlayer1(char player1choice);
char getPlayer2(char player2choice);
bool setTurn(bool& player1turn,char& player1choice,char& player2choice);
bool newGame();
void playGame(bool& player1turn, char& player1choice, char& player2choice);

const char Rock='R', Scissors='S', Paper='P';


int main (){
	char player1choice, player2choice;
	bool player1turn = true;	
	playGame(player1turn, player1choice, player2choice);
	return 0;
}



void displayInstructions(){
	cout<< "\n\nBoth players will select either R, P, or S \n R=rock, P=Paper, S=scissors \n After both players pick a winner will be selected \n\n";
}
void setPlayer1(char& player1choice){
	int Player1Loop=0;
	while (Player1Loop<1){
	cout << "Player 1, select R, P, or S \n";
	cin >> player1choice;
	switch(player1choice){
			case 'r':
			case 'R':
				Player1Loop= Player1Loop+1;
				player1choice=Rock;
				cout << "Player 1 Chose Rock!\n";
		break;
			case 'p':
			case 'P':
				Player1Loop= Player1Loop+1;
				player1choice=Paper;
				cout << "Player 1 Chose Paper\n";
		break;
			case 's':
			case 'S':
				Player1Loop= Player1Loop+1;
				player1choice=Scissors;
				cout << "Player 1 Chose Scissors\n";
		break;
		default:
			cout<< "invalid input! \n";
			break;
	}
	}
}
void setPlayer2(char& player2choice){
	int Player2Loop=0;
	while (Player2Loop<1){
	cout << "Player 2, select R, P, or S \n";
	cin >> player2choice;
	switch(player2choice){
			case 'r':
			case 'R':
				Player2Loop= Player2Loop+1;
				player2choice=Rock;
				cout << "Player 2 Chose Rock!\n";
		break;
			case 'p':
			case 'P':
				Player2Loop= Player2Loop+1;
				player2choice=Paper;
				cout << "Player 2 Chose Paper\n";
		break;
			case 's':
			case 'S':
				Player2Loop= Player2Loop+1;
				player2choice=Scissors;
				cout << "Player 2 Chose Scissors\n";
		break;
		default:
			cout<< "Invalid Input! \n";
			break;
	}
	}
}
char getPlayer1(char player1choice){
	return player1choice;
}
char getPlayer2(char player2choice){
	return player2choice;
}
bool setTurn(bool& player1turn,char& player1choice,char& player2choice){	
	switch(player1turn){
		case true:
			setPlayer1(player1choice);
			player1turn=false;
			return false;
		case false:
			setPlayer2(player2choice);
			player1turn=true;				
			return true;			
	}
	
}
bool newGame(){
	char quit;
	cout<< "Do you want to play again? y/n \n";
	cin>>quit;
	switch(quit){
	case 'y':
	case 'Y':
		return true;
	default:
		return false;
	}
}
void playGame(bool& player1turn, char& player1choice, char& player2choice){
	do{
		displayInstructions();
		setTurn(player1turn, player1choice,player2choice);		
		setTurn(player1turn, player1choice,player2choice);

		
				

		switch(getPlayer1(player1choice)){
			case Rock:
				switch(getPlayer2(player2choice)){
					case Rock:
						cout<<"\n\nA Tie! \n\n";
						break;
					case Scissors:
						cout<<"\n\nPlayer 1 Wins!\nPlayer 2 Loses! \n\n";
						break;
					case Paper:
						cout<<"\n\nPlayer 2 Wins!\nPlayer 1 Loses! \n\n";
						break;				
				}
				break;
			case Paper:
				switch(getPlayer2(player2choice)){
					case Rock:
						cout<<"\n\nPlayer 1 Wins!\nPlayer 2 Loses! \n\n";
						break;
					case Scissors:
						cout<<"\n\nPlayer 2 Wins!\nPlayer 1 Loses! \n\n";
						break;
					case Paper:
						cout<<"\n\nA Tie! \n\n";		
						break;					
				}
				break;
			case Scissors:
				switch(getPlayer2(player2choice)){
					case Rock:
						cout<<"\n\nPlayer 2 Wins!\nPlayer 1 Loses! \n\n";
						break;
					case Scissors:
						cout<<"\n\nA Tie! \n\n";
						break;
					case Paper:
						cout<<"\n\nPlayer 1 Wins!\nPlayer 2 Loses! \n\n";
						break;							
				}
				break;
		}
		
		
	}while(newGame()==true);
}
