#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n,k;
    cin>>n>>k;
    int frr[k+5];
    for(int i=0;i<k;i++)
        frr[i]=0;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
       a = a%k;
        frr[a]++;
    }

    ll cnt=0;
    //frr[0]=0;
    if(frr[0]>=1)cnt=1;

    if(k%2==0&&frr[k/2]>=1)
    {
        cnt+=1;
        frr[k/2]=0;
    }
    for(int i=1,j=k-1;i<j;i++,j--)
    {
      //  cout<<i<<" "<<j<<endl;
       if(frr[i]==frr[j]&&frr[i]>0&&frr[j]>0)cnt+=1;
       else
       {
           if(frr[i]>frr[j]&&frr[j]>0)
           {
               cnt+=1;
               frr[i]-=frr[j];
               frr[i]--;
               cnt+=frr[i];
           }
           else if(frr[i]<frr[j]&&frr[i]>0)
           {
               cnt+=1;
               frr[j]-=frr[i];
               frr[j]--;
               cnt+=frr[j];
           }
           else if(frr[i]==0)
           {
               cnt+=frr[j];
           }
           else if(frr[j]==0)
           {
               cnt+=frr[i];
           }
       }
    }

    cout<<cnt<<endl;

}

int main()
{
    int q;cin>>q;while(q--)solve();
  // solve();
}
