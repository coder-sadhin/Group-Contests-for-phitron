#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    string a,b;
    getline(cin,a);
    getchar();
    getline(cin,b);
    stringstream X(a);
    string fn,ln;
    X>>fn>>ln;
    stringstream Y(b);
    string fn2,ln2;
    Y>>fn2>>ln2;
    if(ln2==ln){
        cout<<"ARE Brothers"<<endl;
    }else cout<<"NOT"<<endl;
    
    
    return 0;
}
    