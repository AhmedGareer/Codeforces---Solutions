#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x,Max,r1,r2;
    vector <long long> v;
    cin>>x;
    for(int i=0;i<x;i++){
        int y;
        cin>>y;
        v.push_back(y);
    }
    sort(v.begin(),v.end());
    Max=abs(v[0]-v[x-1]);
    if(Max==0){
        cout<<Max<<" "<<(x*(x-1))/2<<endl;
    }
    else{
     r1=count(v.begin(),v.end(),v[x-1]);
     r2=count(v.begin(),v.end(),v[0]);
    cout<<Max<<" "<<r1*r2<<endl;
    }

    return 0;
}
