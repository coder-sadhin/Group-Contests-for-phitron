#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, X;
    char S, Y;
    cin>>A>>S>>B>>Y>>X;
    if(S == '+'){
        if((A + B)==X){
           cout << "Yes"; 
        }else{
            cout<<(A + B);
        }
    } else if(S == '-'){
        if((A - B)==X){
           cout << "Yes"; 
        }else{
            cout<<(A - B);
        }
    }else if(S == '*'){
        if((A * B)==X){
           cout << "Yes"; 
        }else{
            long long mul=(A * B);
            cout<<mul;
        }
    }
    return 0;
 
}