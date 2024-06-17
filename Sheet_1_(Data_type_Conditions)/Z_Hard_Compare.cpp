#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A, C;
    long long B, D;
    cin >> A >> B >> C >> D;
    unsigned long long int fst = pow(A, B);
    unsigned long long int snd = pow(C, D);
    if(fst > snd){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}