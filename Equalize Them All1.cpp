#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int max1=0,lax=0;
    int arr[n+5];
    map<int,int>frr;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        frr[arr[i]]++;
         if(frr[arr[i]]>lax)
        {
            max1=arr[i];
            lax=frr[arr[i]];
        }
    }

    vector<int>v;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]==max1)
        {
            v.push_back(i);
        }
    }
    cout<<n-v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        int k=v[i];
       // cout<<k<<endl;
        for(int j=k+1;j<=n;j++)
        {
            if(arr[j]<max1)
            {
                cout<<1<<" "<<j<<" "<<j-1<<endl;
                arr[j]=max1;
            }
            else if(arr[j]>max1)
            {
                cout<<2<<" "<<j<<" "<<j-1<<endl;
                arr[j]=max1;
            }
            else if(arr[j]==max1)break;
        }
         for(int j=k-1;j>=1;j--)
        {
            if(arr[j]<max1)
            {
                cout<<1<<" "<<j<<" "<<j+1<<endl;
                arr[j]=max1;
            }
            else if(arr[j]>max1)
            {
                cout<<2<<" "<<j<<" "<<j+1<<endl;
                arr[j]=max1;
            }
            else if(arr[j]==max1)break;
        }
    }
}
