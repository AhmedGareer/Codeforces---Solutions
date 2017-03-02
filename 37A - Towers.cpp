#include <bits/stdc++.h>
using namespace std;

int main()
{
   int x,Max=0,n=0,ans,a,b,c;
   vector <int> v;
   cin>>x;

   for(int i=0;i<x;i++){
    int y;
    cin>>y;
    v.push_back(y);
   }
   sort(v.begin(),v.end());

   for(int i=0;i<x;i++){
    a=lower_bound(v.begin(),v.end(),v[i])-v.begin();
    b=upper_bound(v.begin(),v.end(),v[i])-v.begin();
    c=b-a;
    ans=max(c,Max);
    Max=ans;
    n++;
    i=b-1;
   }

   cout<<ans<<" "<<n<<endl;


    return 0;
}
