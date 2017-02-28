#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,r1=0,r2=0,f1,f2;
    string s;
    cin>>n;
    cin>>s;
        for(int i=1;i<s.size();i+=2)
            if(s[i]!='b')
                r1++;

        for(int i=0;i<s.size();i+=2)
            if(s[i]!='r')
            r2++;

        f1=max(r1,r2);

        r1=0,r2=0;
        for(int i=1;i<s.size();i+=2)
        {
            if(s[i]!='r')
                r1++;
        }
        for(int i=0;i<s.size();i+=2)
            if(s[i]!='b')
            r2++;
        f2=max(r1,r2);

        cout<<min(f1,f2)<<endl;
    return 0;
}
