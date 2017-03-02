#include <bits/stdc++.h>
using namespace std;

int main()
{
   int x,y,sum=0,temp;
   cin>>x>>y;
   temp=x;
   for(int i=1;i<x;i++)
        if(i*y<=x){
            sum++;
            x++;
        }
        else
            break;

    cout<<sum+temp<<endl;

    return 0;
}
