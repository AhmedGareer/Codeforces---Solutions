#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <algorithm>
using namespace std;

int main ()
{
    int n,c,x=0,i,y=0;
    vector <int> myvector;
    cin>>n;
    while(n--)
    {
        cin>>c;
        myvector.push_back(c);
    }
    for(i=0;i<myvector.size();i++)
    {
        if(myvector[i]==-1)
        {
                x=x+myvector[i];
                if(x<0)
                {
                    y++;
                    x=0;
                }
        }
        else
        {
            x=x+myvector[i];
        }
    }
    cout<<y;
    return 0;
}
