#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,k,value;
   vector <int> v;
   while(cin>>n>>k){
        for(int i=0;i<n;i++){
    int z;
    cin>>z;
    v.push_back(z);
   }
    if(v[k-1]==0)
    value=1;
   else
    value=v[k-1];
   sort(v.begin(),v.end());

   int it=lower_bound(v.begin(),v.end(),value)-v.begin();
   cout<<v.size()-it<<endl;

   v.clear();
   }
    return 0;
}
