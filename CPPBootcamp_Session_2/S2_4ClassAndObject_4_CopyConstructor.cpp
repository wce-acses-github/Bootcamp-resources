#include<iostream>
using namespace std;
class Game{
    public :
    int highScore;
    string name;

    Game(){
        highScore = 1000;
        name = "Player1";
    }
    /*
    //Explicit Copy Constructor
    Game(const Game &obj){
    highScore = obj.highScore;
    name = obj.name;
    }
    */
} ;                      
int main(){
    Game Player1;
    cout<<"For Player 1 : \n Name : "<<Player1.name<<" High Socre : "<<Player1.highScore<<endl;
    Game Player2 = Player1; //This will call implicit copy constructor uncomment the explicit copy constructor to call the explicit copy constructor
    cout<<"For Player 2 : \n Name : "<<Player2.name<<" High Socre : "<<Player2.highScore<<endl;
    //Another way of calling the copy constructor
    Game Player3 = Game(Player1);
    cout<<"For Player 3 : \n Name : "<<Player3.name<<" High Socre : "<<Player3.highScore;
    return 0;
}