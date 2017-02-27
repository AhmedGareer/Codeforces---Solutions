#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;

int main ()


{

    int s,x,y,n,test=0,i=0;
    vector <int> myvectorx;
    vector <int> myvectory;
    cin>>s>>n;
    while (n--)
    {
        cin>>x>>y;
        myvectorx.push_back(x);
        myvectory.push_back(y);
    }
   // sort(myvectorx.begin(),myvectorx.end());
    //cout<<myvectorx[0]<<myvectorx[1]<<endl;
    while (i<myvectorx.size())
        {
        if (s>myvectorx[i])
        {
            s=s+myvectory[i];
            myvectorx.erase(myvectorx.begin()+i);
            myvectory.erase(myvectory.begin()+i);
            i=-1;
        }

        i++;
        }
    if(myvectorx.size()==0)
        cout<<"YES";
    else
        cout<<"NO";


    return 0;
}
