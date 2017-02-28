#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector <int> v;
  int n,x,sum=0;

  while(cin>>n){
    sum=0;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
        sum+=v[i];
    }
    int average=sum/2;
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    sum=0;
    for(int i=0;i<n;i++){
            sum+=v[i];
        if(sum>average){
            cout<<i+1<<endl;
            break;}
    }
    v.clear();
  }
    return 0;
}
