#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    int frr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i],frr[i]=arr[i];
    sort(frr,frr+n);
    int idx1=-1,idx2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=frr[i])
        {
            if(idx1==-1)idx1=i;
            idx2=i;
        }
    }
    if(idx1>=0){
    for(int i=idx1,j=idx2;i<=j;i++,j--)
    {
        swap(arr[i],arr[j]);
    }
    }

    bool tr=true;
    for(int i=0;i<n;i++)
    {
       // cout<<arr[i]<<" ";
        if(arr[i]!=frr[i])tr=false;
    }

    if(!tr)cout<<"impossible"<<endl;
    else
    {
      if(idx1>=0)  cout<<idx1+1<<" "<<idx2+1<<endl;
      else cout<<1<<" "<<1<<endl;
    }

}

int main()
{
    solve();
}
