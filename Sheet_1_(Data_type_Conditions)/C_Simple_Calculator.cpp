#include<bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    long long sum = static_cast<long long>(X) + Y;
    long long mul = static_cast<long long>(X) * Y;
    int sub = X - Y;

    cout << X << " + " << Y << " = " << sum << endl;
    cout << X << " * " << Y << " = " << mul << endl;
    cout << X << " - " << Y << " = " << sub << endl;

    return 0;
}