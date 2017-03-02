#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x,sum=0,i;
  cin>>x;
  i=5;
    while(i!=0 || x!=0){
        sum+=x/i;
        x=x-((x/i)*i);
        i--;
    }
    cout<<sum<<endl;



    return 0;
}
