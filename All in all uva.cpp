#include<bits/stdc++.h>
using namespace std;

string arr,frr;

int main()
{
    while((cin>>frr>>arr))
    {
         int idx=0;
         bool tr=false;
         for(int i=0;i<arr.size();i++)
         {
             if(frr[idx]==arr[i])
             {
                 idx++;
                 if(idx==frr.size())tr=true;
             }
         }
         if(tr)cout<<"Yes"<<endl;
         else cout<<"No"<<endl;
    }
}
