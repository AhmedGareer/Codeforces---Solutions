#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include  <stdlib.h>
#include <string>
#include <algorithm>
#include <windows.h>
#include <vector>
#include <set>
#include <map>


using namespace std;

int main()
{
    set <string> myset;
    string x,z;
    int i;
    getline(cin,x);
    for ( i=0;x[i]!='\0';i++)
    {

        if (x[i]=='{' || x[i]=='}' || x[i]==',' || x[i]==' '){
            continue;
        }
        else{
                z=x[i];
            myset.insert(z);
        }
    }

    cout<<myset.size();

    return 0;

}
