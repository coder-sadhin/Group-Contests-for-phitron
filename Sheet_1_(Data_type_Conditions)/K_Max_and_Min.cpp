#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int a,b,c;
    cin>>a>>b>>c;
    vector<int> arr={a,b,c};
    sort(arr.begin(),arr.begin()+3);
    
    cout<<arr[0]<<" "<<arr[2];
    
    return 0;
}
    