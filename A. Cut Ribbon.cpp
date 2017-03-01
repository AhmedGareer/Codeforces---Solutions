#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x,a[4],sum1=0,sum2=0,c,Max=0,ans,temp[4001]={0};
    cin>>x;
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    sort(a,a+3);

    for(int i=0;i<=4000;i+=a[2])
        temp[i]=i;


   for (int i=0;i<=4000;i++){
        sum1=(i*a[0]);
        if(sum1>x)
            break;
   for(int j=0;j<=4000;j++){
    c=0;
    sum2=sum1+(j*a[1])-x;
    if(sum2>0)
        break;
    else {
            if(sum2*-1==0){
        c=0;
        ans=max(c+i+j,Max);
        Max=c+i+j;
        break;
        }
        else if(temp[sum2*-1]!=0){
            c=temp[sum2*-1]/a[2];
            ans=max(c+i+j,Max);
            Max=c+i+j;
        }
        }
   }

   }
   cout<<ans<<endl;
    return 0;
}
