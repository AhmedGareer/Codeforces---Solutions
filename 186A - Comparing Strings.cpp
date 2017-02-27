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
    string word1,word2;
    vector <char> myvector1;
    vector <char> myvector2;
    int i=0,checker=0;
    cin>>word1;
    cin>>word2;
    while(word1[i]!='\0')
    {
        myvector1.push_back(word1[i]);
        i++;
    }
    i=0;
    while(word2[i]!='\0')
    {
        myvector2.push_back(word2[i]);
        i++;
    }
    sort(myvector1.begin(),myvector1.end());
    sort(myvector2.begin(),myvector2.end());
    if(myvector1==myvector2)
    {
            for(i=0;i<myvector2.size();i++)
            {
                if(word1[i]!=word2[i])
                {
                    checker++;
                }
            }
            if(checker>2)
            {
                cout<<"NO";
            }
            else
                cout<<"YES";
    }
    else
        cout<<"NO";


    return 0;
}
