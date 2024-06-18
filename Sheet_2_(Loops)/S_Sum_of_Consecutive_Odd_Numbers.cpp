#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;
    while (N--) {
        int m,n;
        cin>>m>>n;
        int sum = 0;
        int start = min(m, n) + 1;
        int end = max(m, n) - 1;
        for (int i = start; i <= end; i++)
        {
            if(i%2!=0){
                sum += i;
            }
        }
        cout << sum << endl;
    }

    return 0;
}
