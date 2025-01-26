#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int>stk;
    cout<<"is stack empty = "<<stk.empty()<<endl;
    stk.push(13);
    cout<<"top element = "<<stk.top()<<endl;
    stk.push(25);
    cout<<"top element = "<<stk.top()<<endl;
    stk.push(9);
    stk.push(66);
    stk.pop();
    stk.push(3);
    stk.push(5);
    while(!stk.empty()){
        cout<<stk.top()<<" ";
        stk.pop();
    }
    cout<<endl;
    // cout<<"stack is now empty"<<endl;
    return 0;
}