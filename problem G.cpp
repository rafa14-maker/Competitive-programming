#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p;
    string arr,krr;
    cin>>n;
   p=n;
    int k=n;
    while(k>0)
    {
        arr+=(k%10)+48;
        k/=10;
    }
    sort(arr.begin(),arr.end());
    while(1==1)
    {
        p++;
        string frr;
        int l=p;
       // cout<<l<<endl;
        while(l>0)
       {
        frr+=(l%10)+48;
        l/=10;
        }
        reverse(frr.begin(),frr.end());
        krr=frr;
        sort(frr.begin(),frr.end());
        if(arr==frr)break;

        if(frr.size()>arr.size())
        {
            cout<<0<<endl;
            return 0;
        }

       }
        cout<<krr<<endl;
    }


