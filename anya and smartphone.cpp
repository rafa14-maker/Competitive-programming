#include<bits/stdc++.h>
using namespace std;
int frr[100005];
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int arr[n+5];
    for(int i=1;i<=n;i++)cin>>arr[i];

  //  for(int i=1;i<=100005;i++)frr[i]=0;
    for(int i=1;i<=n;i++)
    {
        frr[arr[i]]=i;
    }

  //  for(int i=1;i<=n;i++)cout<<frr[i]<<" ";
    long long sum=0;
    while(m--)
    {
        int x;
        cin>>x;
        int counter=0;
     if((frr[x])%k!=0)counter=(frr[x]/k)+1;
        else counter=(frr[x])/k;
       // cout<<x<<" ";
       //  cout<<frr[x]<<" ";
        if(frr[x]!=1)
        {
            int a=frr[x];
              swap(frr[x],frr[arr[frr[x]-1]]);
            swap(arr[a],arr[a-1]);
         }
      //   cout<<counter<<endl;
 //   for(int i=1;i<=n;i++)cout<<frr[i]<<" ";
   //   cout<<endl;
    sum+=counter;
    }
      // for(int i=1;i<=n;i++)cout<<arr[i]<<" ";
    cout<<sum<<endl;
}
