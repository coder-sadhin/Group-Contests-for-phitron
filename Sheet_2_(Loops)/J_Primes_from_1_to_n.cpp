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
    int N;
    cin >> N;
    
    for (int i = 2; i <= N; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    
    return 0;
}
