#include<bits/stdc++.h>
using namespace std;

int main() {
    double N;
    cin >> N;
    if (N == static_cast<int>(N)) {
        cout << "int " << static_cast<int>(N) << endl;
    } else {
        string numStr = to_string(N);
        size_t decimalPos = numStr.find('.');
        cout << "float " << numStr.substr(0, decimalPos) << " " << fixed << setprecision(3) << stof(numStr.substr(decimalPos)) << endl;
    }
    
    

    return 0;
}