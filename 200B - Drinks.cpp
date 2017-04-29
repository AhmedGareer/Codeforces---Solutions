 #include <bits/stdc++.h>
    using namespace std;

    long long v[1000001];
    int main()
    {
       int x;
       double temp,up=0,down,result=0;
       cin>>x;
       down=x;
       for(int i=0;i<x;i++){
        cin>>temp;
        up+=temp/100;
       }

       result=(up/down)*100;
       printf("%.10f",result);
        return 0;
    }
