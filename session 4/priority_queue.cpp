#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int>max_heap;
    priority_queue <int, vector<int>, greater<int> > min_heap;
    
    // max_heap.push(5);
    // max_heap.push(3);
    // max_heap.push(1);
    // max_heap.push(7);
    // max_heap.push(10);
    // cout<<max_heap.size()<<endl;
    // while(!max_heap.empty()){
    //     cout<<max_heap.top()<<" ";
    //     max_heap.pop();
    // }
    // cout<<endl;

    min_heap.push(5);
    min_heap.push(3);
    min_heap.push(7);
    min_heap.push(4);
    min_heap.push(1);
    cout<<min_heap.size()<<endl;
    while(!min_heap.empty()){
        cout<<min_heap.top()<<" ";
        min_heap.pop();
    }
    return 0;
}