#include<iostream>
using namespace std;
class Game{
    public :
    Game(){
       cout<<"Constructor Called..";
    }
    ~Game(){
        cout<<"Destructor Called..";
    }
} ;                      
int main(){
    Game Player1;
    //Object Creation in local scope
    /*if(true){
        Game obj;
    }*/
   //Destructor will be called as obj goes out of the scope.
Game obj2;
    return 0;
}