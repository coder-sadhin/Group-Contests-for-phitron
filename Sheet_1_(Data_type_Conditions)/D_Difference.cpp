#include<bits/stdc++.h>
using namespace std;

int main() {
    int A,B,C,D;
    cin >> A >> B >> C >> D;

    long long mul1 = static_cast<long long>(A) * B;
    long long mul2 = static_cast<long long>(C) * D;
    long long sub = static_cast<long long>(mul1) - mul2;

    cout <<"Difference = " << sub << endl;

    return 0;
}