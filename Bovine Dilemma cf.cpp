#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    set<double>s;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            double k=abs(arr[i]-arr[j]);
          //  k/=2;
         //  cout<<k<<endl;
            bool tr=true;
          //  for(int p=0;p<n;p++)if(arr[p]==k)tr=false;
           if(tr) s.insert(k);
        }
    }
    cout<<s.size()<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
