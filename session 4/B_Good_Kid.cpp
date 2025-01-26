#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<long long>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        a[0]++;
        long long ans=1;
        for(auto i:a)ans*=i;
        cout<<ans<<endl;

    }
}

int main() {solve();return 0;}
