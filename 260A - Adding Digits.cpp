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


int main()
{

    int a,b,n,i,j;
    cin>>a>>b>>n;
    for (i=0;i<10;i++)
    {
        if(((a*10)+i)%b==0)
        {
            cout<<a<<i;
            for (j=0;j<n-1;j++)
                cout<<0;
            return 0;
        }
    }

    cout<<-1;
}
