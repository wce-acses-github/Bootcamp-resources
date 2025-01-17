#include<iostream>
using namespace std;
class Game{
    public :
    int highScore;
    string name;
    //Parameterized Constructor
    Game(int PhighScore,string PName){
        highScore = PhighScore;
        name = PName;
    }
} ;                      
int main(){
    Game Player1(1000,"Player1");//Arguments are passed accordingly!!
    cout<<"Name : "<<Player1.name<<" High Socre : "<<Player1.highScore;
    return 0;
}