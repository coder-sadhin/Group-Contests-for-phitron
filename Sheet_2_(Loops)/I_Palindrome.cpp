#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int N) {
    string str = to_string(N);
    string rev = str;
    reverse(rev.begin(), rev.end());
    return str == rev;
}

int main() {
    int N;
    cin >> N;
    string strN = to_string(N);
    reverse(strN.begin(), strN.end());
    int revN = stoi(strN);
    cout << revN << endl;
    cout << (isPalindrome(N) ? "YES" : "NO") << endl;

    return 0;
}
