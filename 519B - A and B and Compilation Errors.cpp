#include <bits/stdc++.h>
    using namespace std;

    long long v[3][100001];
    int main()
    {
      int x,found1=0,found2=0;
      cin>>x;
      vector<int>v1;
      for(long long i=0;i<x;i++){
        long long temp;
        scanf("%I64d",&temp);
        v[0][i]=temp;
      }
      for(long long i=0;i<x-1;i++){
        long long temp;
        scanf("%I64d",&temp);
        v[1][i]=temp;
      }
      for(long long i=0;i<x-2;i++){
        long long temp;
        scanf("%I64d",&temp);
        v[2][i]=temp;
      }
      sort(v[0],v[0]+x);
       sort(v[1],v[1]+x-1);
        sort(v[2],v[2]+x-2);

        for(int i=0;i<x-1;i++){
            if(v[0][i]!=v[1][i]){
                v1.push_back(v[0][i]);
                found1=1;
                break;

            }
        }
        if(found1==0)
            v1.push_back(v[0][x-1]);

        for(int i=0;i<x-2;i++){
            if(v[1][i]!=v[2][i]){
                v1.push_back(v[1][i]);
                found2=1;
                break;

            }
        }
        if(found2==0)
            v1.push_back(v[1][x-2]);

         cout<<v1[0]<<endl<<v1[1];
        return 0;
    }
