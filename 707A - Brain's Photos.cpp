#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x,y,check=0;
  cin>>x>>y;
  for (int i=0;i<(x*y);i++){
    string c;
    cin>>c;
    if(c=="C" || c=="M" || c=="Y")
        check=1;
  }
  if(check==1)
    cout<<"#Color"<<endl;
  else
    cout<<"#Black&White"<<endl;

}
