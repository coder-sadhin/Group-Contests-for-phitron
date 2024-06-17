#include <iostream>
using namespace std;

int main() {
    int num;
    cin>>num;
    if(num == 1){
        cout<<"-1"<<endl;
    }
    else{
        for (int i = 1; i < num+1; i++)
        {
            if((i%2)==0){
                cout<<i<<endl;
            }
        }
        
        
    }
    return 0;
}
