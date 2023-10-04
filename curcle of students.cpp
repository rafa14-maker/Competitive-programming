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
        int arr[n+5];
        for(int i=0;i<n;i++)cin>>arr[i];
       int frr[n*2+5];
       for(int i=0;i<n;i++)
       {
           frr[i]=arr[i];
       }
       for(int j=n,i=0;i<n;j++,i++)
       {
           frr[j]=arr[i];
       }

       //for(int i=0;i<n*2;i++)cout<<frr[i]<<" ";

       int counter=0,flag=0;

       for(int i=0;i<n*2-1;i++)
       {
           if(abs(frr[i]-frr[i+1])==1)counter++;
           else counter=1;
           if(counter==n-1){cout<<"YES"<<endl,flag++;
           break;}
       }
       if(n==1)cout<<"YES"<<endl;
      else if(flag==0)cout<<"NO"<<endl;
    }
}
