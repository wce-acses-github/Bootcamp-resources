#include<iostream>
using namespace std;
class Game{
    public :
    int highScore;
    string name;
    //Default Constructor
    Game(){
        highScore = 1000;
        name = "Player1";
    }
} ;                      
int main(){
    Game Player1;
    cout<<"Name : "<<Player1.name<<" High Socre : "<<Player1.highScore;
    return 0;
}