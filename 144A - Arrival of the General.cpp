#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[101],r1,r2,max,min;
    cin>>n;

        max=0;min=1000;
        r1=0,r2=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<=min){
                min=a[i];
                r2=i;
            }
            if(a[i]>max){
                max=a[i];
                r1=i;
            }
        }
    if(r1<r2)
        cout<<r1+(n-1-r2)<<endl;
    else
        cout<<r1+(n-1)-(r2+1)<<endl;


    return 0;
}
