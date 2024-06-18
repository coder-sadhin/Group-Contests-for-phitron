#include<bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    while (cin >> A >> B) {
        if (A <= 0 || B <= 0) {
            break;
        }
        int sum = 0;
        int start = min(A, B);
        int end = max(A, B);
        for (int i = start; i <= end; i++)
        {
            sum += i;
            cout << i << " ";
        }
        cout << "sum =" << sum << endl;
    }

    return 0;
}
