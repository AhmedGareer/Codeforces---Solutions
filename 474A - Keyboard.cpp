#include <bits/stdc++.h>
using namespace std;

int main()
{
 string s="qwertyuiopasdfghjkl;zxcvbnm,./",x,w;
 cin>>x;
 cin>>w;
 if(x=="R"){
    for(int i=0;i<w.size();i++){
            for (int j=0;j<s.size();j++){
                if(w[i]==s[j])
                    cout<<s[j-1];
            }
    }
    cout<<endl;
 }
 else{
    for(int i=0;i<w.size();i++){
            for (int j=0;j<s.size();j++){
                if(w[i]==s[j])
                    cout<<s[j+1];
            }
    }
    cout<<endl;
 }

}
