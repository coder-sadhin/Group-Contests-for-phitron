#include <iostream>
using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int product = ((A % 100) * (B % 100) * (C % 100) * (D % 100)) % 100;
    cout << product << endl;

    return 0;
}