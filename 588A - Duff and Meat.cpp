#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,ans=0,price;
    vector <int> v1,v2;
    cin>>x;

    for(int i=0;i<x;i++){
        int y;
        cin>>y;
        v1.push_back(y);
        cin>>y;
        v2.push_back(y);
    }
    price=v2[0];
    for(int i=1;i<x;i++){
        price=min(price,v2[i]);
        ans+=(price*v1[i]);
    }
    cout<<ans+(v1[0]*v2[0])<<endl;

}
