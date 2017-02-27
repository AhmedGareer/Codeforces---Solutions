#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <fstream>
#include <cstring>
#include <vector>

using namespace std;


int main()
{
    int i=0,j,check=0;
    vector<char> myvector;
    char word[100];
    cin>>word;
   while (word[i]!='\0')
   {
       i++;
       check++;
   }

    for ( i=0;i<check;i++)
    {
        myvector.push_back(word[i]);
    }
    for (i=0;i<myvector.size();i++)
    {
        for ( j=i+1;j<myvector.size();j++)
        {
            if (myvector[i]==myvector[j])
            {
                myvector.erase(myvector.begin() + j);
                j=j-1;

            }
        }
    }
    if(myvector.size()%2==0)
    {
         cout<<"CHAT WITH HER!";
    }
    else{ cout<<"IGNORE HIM!";}

    return 0;
}
