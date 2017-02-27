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
    char word1[250],word2[250],word3[250];
    vector <char> myvector1;
    vector <char> myvector2;
    vector <char> myvector3;
    int i=0,first=0,second=0,third=0;
    gets(word1);
    gets(word2);
    gets(word3);
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
    i=0;
    while(word3[i]!='\0')
    {
        myvector3.push_back(word3[i]);
        i++;
    }
    for(i=0;i<myvector1.size();i++)
    {
        if(myvector1[i]=='a' || myvector1[i]=='u' || myvector1[i]=='i' || myvector1[i]=='o' || myvector1[i]=='e')
        {
            first++;
        }
    }
    if(first==5)
    {
        for(i=0;i<myvector2.size();i++)
        {
            if(myvector2[i]=='a' || myvector2[i]=='u' || myvector2[i]=='i' || myvector2[i]=='o' || myvector2[i]=='e')
        {
            second++;
        }
        }
    }
    if(second==7)
    {
        for(i=0;i<myvector3.size();i++)
        {
            if(myvector3[i]=='a' || myvector3[i]=='u' || myvector3[i]=='i' || myvector3[i]=='o' || myvector3[i]=='e')
        {
            third++;
        }
        }
    }
    if(third==5)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}
