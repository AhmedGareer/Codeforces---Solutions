#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long x,y,odd,v[10^12],z;

   cin>>x>>y;

    if(x%2)
        odd=(x+1)/2;

    else
        odd=x/2;

    if(y>odd){
        z=(((y-1)-odd)*2)+2;
        cout<<z<<endl;
    }

    else{

        z=((y-1)*2)+1;
        cout<<z<<endl;
    }



    return 0;
}
