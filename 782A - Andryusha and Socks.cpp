#include <bits/stdc++.h>
using namespace std;

int main()
{
   int x,z,sum=0,ans=1,SIZE=0;
   set <int> v;
   set <int>::iterator it;
   cin>>x;
   for(int i=0;i<2*x;i++){
    cin>>z;
    v.erase(z);
    SIZE=v.size();
    if(SIZE<sum){
    sum=v.size();
    ans=max(sum,ans);
    }
    else{
    v.insert(z);
    sum=v.size();
    ans=max(sum,ans);

   }
   }
cout<<ans<<endl;


    return 0;
}
