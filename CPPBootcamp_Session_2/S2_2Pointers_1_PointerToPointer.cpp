#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x = 4;
    int *pX = &x;
    int **ppX = &pX;
    cout << pX << " " << *pX << endl;
    cout << ppX << " " << *ppX << " " << **ppX << endl;
}