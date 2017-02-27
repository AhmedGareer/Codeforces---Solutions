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
    long long  a[100005];
    long long x,y,i,sum=0,Min=~(1<<31);
    cin>>x>>y;
    for (i=0;i<x;i++){
        cin>>a[i];
        Min =min(Min,a[i]);
    }
    sum=Min*x;
    for (i=0;i<x;i++)
        a[i]-=Min;

     i=y-1;
    while (a[i]!=0)
    {
        a[i]--;
        sum++;
        i=(i+x-1)%x;
    }
    a[i]=sum;
    for (i=0;i<x;i++)
        cout<<a[i]<<" ";
    return 0;
}
