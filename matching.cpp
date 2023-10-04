#include<bits/stdc++.h>
using namespace std;

int arr[]={0,2,5,5,4,5,6,3,7,6};

int n,k;

int frr[10];

string p="0";

void f(int c,int sum,string fr)
{
   // cout<<c<<" ";
    fr+=c+'40';
   // cout<<c<<" ";
         sum+=arr[c];
     // cout<<arr[c]<<endl;

    if(sum>k)
    {
        return ;
    }
    else if(sum==k)
    {
        sort(fr.begin(),fr.end());
        reverse(fr.begin(),fr.end());
     //  cout<<fr<<endl;
        if(p.size()<=fr.size()&&p<=fr)p=fr;
        return;
    }
    for(int i=0;i<n;i++)
    {
        f(frr[i],sum,fr);
    }
}

int main()
{
    cin>>k>>n;
    for(int i=0;i<n;i++)cin>>frr[i];
    for(int i=0;i<n;i++)
    {
        string g="";
        f(frr[i],0,g);
    }
    cout<<p<<endl;
}
