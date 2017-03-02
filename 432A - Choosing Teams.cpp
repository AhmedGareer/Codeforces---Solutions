#include <bits/stdc++.h>
using namespace std;

int main()
{
 int x,y,c,counter=0;
 vector <int> v;
 cin>>x>>y;
 for(int i=0;i<x;i++)
 {
     int z;
     cin>>z;
     v.push_back(z);
 }
 sort(v.begin(),v.end());
 c=5-y;
 for(int i=0;i<x;i++){
    if(v[i]<=c)
        counter++;
    else
    break;
 }
 cout<<counter/3<<endl;
}
