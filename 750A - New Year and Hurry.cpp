#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z,sum=0,counter=0;
    cin>>x>>y;
    z=240-y;
    for(int i=1;i<=x;i++){
             sum+=(i*5);
            if(sum<=z){
            counter++;
            }
            else
                break;
    }
    cout<<counter<<endl;
}
