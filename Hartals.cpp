#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int k;
        cin>>k;
        int arr[k+5];
        for(int i=0;i<k;i++)cin>>arr[i];
        int frr[n+5]={0};
        for(int i=0;i<k;i++)
        {
            int p=arr[i];
            int j=1;
            int t=1;
            while(t<n)
            {
                t=p*j;
                if(t>n)break;
                frr[t]=1;
                j++;
               // cout<<p<<" "<<t<<endl;
            }
           // cout<<arr[i]<<" "<<j<<endl;
        }
       int p=6;
       while(p<=n)
       {
           frr[p]=0;
           if(p+1<n)frr[p+1]=0;
           p+=7;
       }

        int counter=0;
        for(int i=1;i<=n;i++)
        {
            if(frr[i]==1)counter++;
        }
       // cout<<endl;
        cout<<counter<<endl;
    }
}
