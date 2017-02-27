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
    int n,total=0 ,i=0,x;
    char word[200];
    vector <char> myvector;
    cin>>word;
    while (word[i]!='\0')
    {
        myvector.push_back(word[i]);
        i++;
    }
    i=0;
    while(i<myvector.size()-2 && myvector.size()!=1 &&myvector.size()!=2)
    {
        if(myvector[i]=='W'&&myvector[i+1]=='U'&&myvector[i+2]=='B')
        {
            if(myvector[i-1]==' ' || i==0)
            {
                myvector.erase(myvector.begin()+i,myvector.begin()+(i+3))  ;
                i=i-1;

            }
            else
            {

                  myvector.erase(myvector.begin()+i,myvector.begin()+(i+2))  ;
                  myvector.at(i)=' ';
                  i=i-1;
            }

        }
        i++;
    }


    i=myvector.size()-1;
    while(myvector[i]==' ')
    {
        myvector.erase(myvector.begin()+i);
        i=myvector.size()-1;
    }
    i=0;
    for(i=0;i<myvector.size();i++)
    {
        cout<<myvector[i];
    }


    return 0;
}
