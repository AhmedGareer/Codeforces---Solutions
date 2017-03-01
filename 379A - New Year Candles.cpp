#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,r1;
    cin>>x>>y;
    r1=x;
    while(x>=y){
        r1+=(x/y);
        x=(x/y)+(x%y);
    }
    cout<<r1<<endl;
    return 0;
}
