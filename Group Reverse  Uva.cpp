#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        int n;
        cin>>n;
        if(n==0)break;
        string arr;
        cin>>arr;
        vector<string>v;
        n=arr.size()/n;
       for(int i=0;i<arr.size();i+=n)
       {
           string frr;
           for(int j=i;j<i+n;j++)frr+=arr[j],arr[j]='9';
         reverse(frr.begin(),frr.end());
         cout<<frr;
       }
       string g;
       for(int i=0;i<arr.size();i++)
       {
           if(arr[i]!='9')
           g+=arr[i];
       }
        reverse(g.begin(),g.end());
         if(g.size()>0)cout<<g;
         cout<<endl;
    }
}
