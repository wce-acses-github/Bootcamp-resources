#include<bits/stdc++.h>
using namespace std;
int main(){
    
   int t=max(2,3);
   int a[5]={2,4,33,5,61};
   sort(a,a+5);
   for(int i=0;i<5;i++){
    cout<<a[i]<<" ";
   }
   cout<<endl;
   int maxi=9999999;
   for(int i=0;i<5;i++){
    maxi=min(maxi,a[i]);
   }
   cout<<maxi<<endl;
   cout<<t<<endl;
}


//http://10.40.11.172:5500/bot.html
// for resources