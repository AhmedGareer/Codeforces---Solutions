#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,q;
  vector <int> s;

  while(cin>>n){
        s.clear();
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    s.push_back(x);
  }
  sort(s.begin(),s.end());
  cin>>q;
  for(int i=0;i<q;i++){
    int x;
    cin>>x;
  int it=upper_bound(s.begin(),s.end(),x)-s.begin();

    if(x!=s[it])
  cout<<it<<endl;
  else
    cout<<it+1<<endl;
  }
  }

    return 0;
}
