#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include  <stdlib.h>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>

using namespace std;

int days[15] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int main()
{

    map <string,int> mp;
    int d,y,m,z,n=0;
    string s,a,temp;
    cin>>s;
    for (int i=0;i+10<=s.length();i++)
    {
        temp=s.substr(i,10);
        if (sscanf((temp+"*1").c_str(),"%2d-%2d-%4d*%d",&d,&m,&y,&z)!=4) continue;
        if (d<1 || d>days[m] || m>12 || m<1 || y<2013 || y>2015) continue;
        mp[temp]++;
        if (n<mp[temp]){
            n=mp[temp];
        a=temp;}
    }


    cout<<a;

}
