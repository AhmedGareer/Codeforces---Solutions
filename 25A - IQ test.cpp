#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <fstream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    vector<int> myvector;
    int first,i=0,second,checker1=0,checker2=0,test1,test2;
    cin>>first;

    while (i<first)
    {
        cin>>second;
        myvector.push_back(second);
        i++;

    }
    for(i=0;i<myvector.size();i++)
    {
        if (myvector[i]%2==0)
        {
            test1=i;
            checker1++;

        }
        else
        {
            test2=i;
            checker2++;

        }
    }
    if(checker1==1)
    {
        cout<<test1+1;
    }
    if(checker2==1)
    {
        cout<<test2+1;
    }


    return 0;
}
