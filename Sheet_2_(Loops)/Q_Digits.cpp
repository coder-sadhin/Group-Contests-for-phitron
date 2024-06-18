#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++)
    {
        int x;cin>>x;
        string s = to_string(x);
        reverse(s.begin(), s.end());
        for (char c : s)
        {
            cout<<c<<" ";
        }
        cout<<endl;
    }
    return 0;
}
