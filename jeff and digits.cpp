#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,counter=0,found=0,k;
    cin>>n;
    while(n--)
    {
        cin>>k;
        if(k==0)counter++;
        if(k==5)found++;
    }
    int m=found%9;
    found-=m;

   if(found==0&&counter>0)
   {
       cout<<0<<endl;
   }
    else if(found!=0&&counter>0)
    {
        while(found--)
        {
            cout<<5;
        }
        while(counter--)
        {
            cout<<0;
        }
    }
    else
    {
        cout<<-1<<endl;
    }
}
