#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int>q;
    cout<<"is stack empty = "<<q.empty()<<endl<<endl;
    q.push(13);
    cout<<"front element = "<<q.front()<<endl<<endl;
    cout<<"rear element = "<<q.back()<<endl;
    q.push(25);
    cout<<"front element = "<<q.front()<<endl<<endl;
    cout<<"rear element = "<<q.back()<<endl;
    q.pop();
    cout<<"front element = "<<q.front()<<endl<<endl;
    cout<<"rear element = "<<q.back()<<endl;
    q.push(9);
    q.push(66);
    q.push(3);
    q.push(5);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl<<endl;
    cout<<"stack is now empty"<<endl;
    return 0;
}


