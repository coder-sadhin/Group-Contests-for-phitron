#include<bits/stdc++.h>
using namespace std;
int main()
{
    int X;
    cin >> X;
    int year=X/365;
    int month=(X%365)/30;
    int day= ((X%365)%30);
    cout<<year<<" years\n"<<month<<" months\n"<<day<<" days";
    return 0;
}

