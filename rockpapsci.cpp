#include <iostream>
#include <cstdlib>
#include <cstring>
#include <time.h>
#include <limits>
using namespace std;
	string randommove[3] = {"rock", "paper", "scissor"};

	int main() {
		srand(time(0));
		// int d = rand()%4;
		char ch;
		int win=0 , lost =0 , tie =0 ;

		string usermove ;
		do{

		cout<<"******Welcome to rock , paper and Scissor******  "<<endl;
		
		
		
		cout<<"Enter your move : "<<endl;
		 getline(cin , usermove);
		cout<<"Your move : "<<usermove<<endl;
		 int d = rand()%3;
		string computer_choise = randommove[d];

		cout<<"Computer : "<<randommove[d]<<endl;


		if(usermove == "rock" && computer_choise == "rock") {
		    cout << "It was a tie!" << endl;
		    tie++;
		} 
		else if (usermove == "rock" && computer_choise == "paper") {
		    cout << "The computer won! Better luck next time!" << endl;
		    lost++;
		} 
		else if (usermove == "paper" && computer_choise == "paper") {
		    cout << "It was a tie!" << endl;
		    tie++;
		} 
		else if (usermove == "paper" && computer_choise == "scissor") {
		    cout << "The computer won! Better luck next time!" << endl;
		    lost++;
		} 
		else if (usermove == "scissor" && computer_choise == "scissor") {
    		cout << "It was a tie!" << endl;
    		tie++;
		} 
		else if (usermove == "scissor" && computer_choise == "rock") {
		    cout << "The computer won! Better luck next time!" << endl;
		    lost++;
		} 
		else {
		    cout << "Congrats! You won!" << endl;
		    win++;
		}
		cout<<"Wins : "<<win<<endl
			<<"loses : "<<lost<<endl
			<<"ties : "<<tie<<endl;

			cout<<"DO YOU WANNA PLAY AGAIN (Y/N) "<<endl;
			cin >> ch;
			system("cls");
			cin.ignore();//used to clear the input buffer so that getline works again 
	}while(ch == 'Y' || ch == 'y');


		
	}