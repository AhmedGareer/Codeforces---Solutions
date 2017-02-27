#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
using namespace std;
int main ()
{
    char word[100];
    int i=0,L=0;
    cin >>word;
    while (word[i]!='\0')
    {
       if (islower(word[i]))
       {
           L++;
       }

        i++;
    }
    i=0;
        if (L==0)
            {
                 while (word[i]!='\0')
                 {
                     word[i]=tolower(word[i]);
                     cout<<word[i];
                     i++;
                 }
            }
        if (L==1&&islower(word[i]))
        {
            word[i]=toupper(word[i]);
            cout<<word[i];
            i=1;
            while (word[i]!='\0')
            {
                     word[i]=tolower(word[i]);
                     cout<<word[i];
                     i++;
            }

        }
            else {

                while (word[i]!='\0')
                 {

                     cout<<word[i];
                     i++;
                 }
            }


    return 0;
}
