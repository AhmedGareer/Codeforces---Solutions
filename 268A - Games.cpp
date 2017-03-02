#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x,counter=0;
  vector <int> a1,a2;
  cin>>x;
  for(int i=0;i<x;i++){
    int y1,y2;
    cin>>y1>>y2;
    a1.push_back(y1);
    a2.push_back(y2);
  }
  for (int i=0;i<x;i++){
    for(int j=0;j<x;j++)
    {
        if(a1[i]==a2[j])
            counter++;
    }
  }
    cout<<counter<<endl;

    return 0;
}
