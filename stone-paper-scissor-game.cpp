#include<iostream>
#include<ctime>
using namespace std;


int play(){
    int userChoice;
    cout << "enter your choice " << endl << "1 for scissor" << endl << "2 for rock"  << endl << "3 for paper" << endl;
    cin >> userChoice;
    return userChoice;
}

int main(){
    int player;
    int computer;
    int win = 0,lose = 0;

    srand(time(NULL));
    int i =0;
    do{
        player = play();
        computer = (rand() % 3) + 1;
        cout << endl;
        if(player == computer ){
            cout << "It was a draw! \n";
            i--;
        }
        else if(player == 1 && computer == 2){
            cout << "Opponent Won \n";
            lose++;
        }
        else if(player == 1 && computer == 3){
            cout << "You WON \n";
            win++;
        }
        else if(player == 2 && computer == 1){
            cout << "You Won \n";
            win++;
        }
        else if(player == 2 && computer == 3){
            cout << "Opponent won \n";
            lose++;
        }
        else if(player == 3 && computer == 1){
            cout << "Opponent Won \n";
            lose++;
        }
        else if(player == 3 && computer == 2){
            cout << "You Win \n";
            win++;
        }


        i++;
    }while(i < 5);

    if(win >= 3){
        cout << "You are the winner! " << win << " " << lose ;
    }
    else{
        cout << "You are a loser! " << win << " " << lose ;
        
    }


}