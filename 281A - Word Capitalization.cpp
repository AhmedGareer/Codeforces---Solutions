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
    string word;
    vector <char> myvector;
    int i=1;
    cin>>word;
    myvector.push_back(toupper(word[0]));

    while(word[i]!='\0')
    {
        myvector.push_back(word[i]);
        i++;
    }
    for(i=0;i<myvector.size();i++)
    {
        cout<<myvector[i];
    }
    return 0;
}
