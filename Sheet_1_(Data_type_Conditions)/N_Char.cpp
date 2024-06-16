#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x;
    cin>>x;
    if(isupper(x)){
        printf("%c\n", tolower(x));
    }
    else{
        printf("%c\n", toupper(x));
    }
    return 0;
 
}