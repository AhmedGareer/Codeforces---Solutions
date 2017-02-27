#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <stdio.h>
#include <math.h>
#include <algorithm>
#define SIZE 6
using namespace std;

void bubblesort (int a[],int size)
{
    int j,pass,temp;
    for (pass=1;pass<size;pass++)
    {
        for (j=0;j<size-1;j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main ()
{

  int b[SIZE];
  for (int i=0;i<SIZE;i++)
  {
      cin>>b[i];
  }
    bubblesort(b,SIZE);
   // cout<<b[0]<<b[1]<<b[2]<<b[3]<<endl;
    if (b[0]==b[1]&&b[1]==b[2]&&b[2]==b[3])
    {
        if (b[4]==b[5])
        {
            cout<<"Elephant";
             return 0;
        }
        else
        {
            cout<<"Bear";
             return 0;
        }
    }
    if (b[2]==b[3]&&b[3]==b[4]&&b[4]==b[5])
    {
        if (b[0]==b[1])
        {
            cout<<"Elephant";
            return 0;
        }
        else{
            cout<<"Bear";
             return 0;
        }
    }
    if (b[1]==b[2]&&b[2]==b[3]&&b[3]==b[4])
    {
        if (b[0]==b[5])
        {
            cout<<"Elephant";
             return 0;
        }
        else{
            cout<<"Bear";
             return 0;
        }
    }
    else
    {
        cout<<"Alien";
    }
    return 0;
}
