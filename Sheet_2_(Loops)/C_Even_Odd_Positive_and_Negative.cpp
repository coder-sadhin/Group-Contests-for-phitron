#include <iostream>
using namespace std;

int main() {
    int n,temp;
    cin>>n;
    int Even = 0;
    int Odd = 0;
    int Positive = 0;
    int Negative = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        if(temp > 0){
            Positive++;
        }
        if(temp < 0){
            Negative++;
        }
        if(temp==0 || ((temp%2)==0)){
            Even++;
        }
        if((temp%2)!=0){
            Odd++;
        }
    }
    cout<<"Even: "<<Even<<endl<<"Odd: "<<Odd<<endl<<"Positive: "<<Positive<<endl<<"Negative: "<<Negative<<endl;



    return 0;
}

