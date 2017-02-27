#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector <int> v;
  int x,count;
  while(cin>>x){
    count=0;
    v.clear();
    for(int i=0;i<x;i++){
        int y;
        cin>>y;
        v.push_back(y);
    }

    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(int i=0;i<x-2;i++){

        if(v[i]<(v[i+1]+v[i+2])){
            cout<<"Yes\n";
            count=1;
            break;
        }
    }
    if(count==0)
        cout<<"No\n";

  }
    return 0;
}
