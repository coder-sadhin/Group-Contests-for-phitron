#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    for (int i = 1; i <= N; i++)
    {
        for (int t = 1; t <= N-i; t++)
        {
            cout<<" ";
        }
        
        for (int j = 0; j < 2*i-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
