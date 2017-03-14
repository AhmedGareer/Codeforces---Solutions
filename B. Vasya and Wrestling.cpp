#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <long long> v1,v2;
    long long n,r1=0,r2=0,sum=0,l,checker=0;
    cin>>n;
        for(long long i=0;i<n;i++){
            long long x;
            cin>>x;
            if(x>0){
                sum+=x;
                r1++;
                l=1;
                v1.push_back(x);
            }
            else{
                sum+=x;
                r2++;
                l=2;
                v2.push_back(abs(x));
            }
        }
        if(sum>0)
            cout<<"first"<<endl;
        else if(sum<0)
            cout<<"second"<<endl;
        else
        {
            long long S=min(v1.size(),v2.size());
            for(long long i=0;i<S;i++){
                    if(v1[i]>v2[i]){
                        cout<<"first"<<endl;
                        checker=1;
                        break;
                    }
                    else if(v1[i]<v2[i]){
                        cout<<"second"<<endl;
                        checker=1;
                        break;
                    }
            }
            if(checker==0){
                if(l==1)
                    cout<<"first"<<endl;
                else
                    cout<<"second"<<endl;
            }
            
        }
       
    return 0;
}
