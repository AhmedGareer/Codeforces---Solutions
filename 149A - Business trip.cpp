#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <fstream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;


int main()
{
    int first,second,i=0,mysum=0;
    vector <int> myvector;

    cin>>first;
    while(12>i)
    {
        cin>>second;
        myvector.push_back(second);
        i++;
    }

    sort(myvector.begin(),myvector.end());
    reverse(myvector.begin(),myvector.end());

    for(i=0;i<myvector.size();i++)
    {
        if(first==0)
    {
        cout<<"0";
        break;
    }
        mysum=mysum+myvector[i];
        if(mysum>=first)
        {
            cout<<i+1;
            break;
        }

    }
    if (mysum<first)
    {
        cout<<"-1";
    }
    return 0;
}
