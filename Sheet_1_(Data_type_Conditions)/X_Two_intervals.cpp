#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C, D;
    cin>>A>>B>>C>>D;
    int left = max(A, C);
    int right = min(B, D);

    if (left <= right) {
        cout << left << " " << right;
    } else {
        cout << -1;
    }
    return 0;
 
}