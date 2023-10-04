#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;

    int arr[n+5];
    int frr[105]={0};

    int mx=0,px=0;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        frr[arr[i]]++;
        if(frr[arr[i]]>mx)
        {
            mx=frr[arr[i]];
            px=arr[i];
        }
    }

    long long sum=0,kp=0,lk=0;

    //cout<<px<<endl;

   for(int i=0;i<n;i++)
   {
      if(arr[i]!=px)kp++;
      if(kp>0)lk++;
      if(lk==k)
      {
          sum++;
          lk=0;
          kp=0;
      }
   }
   if(kp>0)sum++;
    cout<<sum<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
