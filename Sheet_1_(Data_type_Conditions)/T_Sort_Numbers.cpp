#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    vector<int> arr={a,b,c};
    sort(arr.begin(),arr.begin()+3);
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    cout<<a<<endl<<b<<endl<<c;
    
    

    return 0;
}