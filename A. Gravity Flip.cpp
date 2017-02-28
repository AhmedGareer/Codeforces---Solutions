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
    int first,i=0,second;
    cin>>first;
    while (i<first)
    {
        cin>>second;
        myvector.push_back(second);
        i++;

    }
    sort(myvector.begin(),myvector.end());
    for(i=0;i<myvector.size();i++)
    {
        cout<<myvector[i]<<endl;
    }
    return 0;
}
