#include<iostream>
using namespace std;
class Game{
    public :
    int highScore;
    string name;
    //Constructor with default value
    Game(string pName,int pHighScore = 0){
        highScore=pHighScore;
        name=pName;
    }
};

int main(){
    //Both parameters are passed
    Game player1 = Game("Player1",1000);// pHighScore willl be set as 1000
    cout<<"For Player1 : High Score : "<<player1.highScore<<" Name : "<<player1.name;
    //Only one parameter is passed
    Game player2 =  Game("Player2");// pHighScore willl be set as 0
    cout<<"For Player2 : High Score : "<<player2.highScore<<" Name : "<<player2.name;
    return 0;
}
