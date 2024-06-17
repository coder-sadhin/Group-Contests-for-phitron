#include<bits/stdc++.h>
using namespace std;

bool isPrime(int X) {
    if (X <= 1) {
        return false;
    }
    
    for (int i = 2; i * i <= X; i++) {
        if (X % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int T;
    cin >> T;
    bool ans=isPrime(T);
    cout<<(ans ? "YES" : "NO")<<endl;
    return 0;
}
