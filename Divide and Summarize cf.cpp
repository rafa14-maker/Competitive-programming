#include<bits/stdc++.h>
using namespace std;
using ll =long long;
const int N = 1e5+5;

vector<ll>v;
ll arr[N];
int n,q;

void f(int left,int right)
{
  // cout<<left<<" "<<right<<endl;
    ll sum=0,mx=0,mn=1e9;
  bool tr=true;
  ll px=-1;
    for(int i=left;i<=right;i++)
    {
        sum+=arr[i];
    if(i-1>=0&&arr[i]!=arr[i-1])tr=false;
        mx=max(mx,arr[i]);
        mn=min(mn,arr[i]);
    }
    v.push_back(sum);
    if(tr)return ;
    ll kp=(mx+mn)/2;
   // cout<<kp<<endl;

    for(int i=left;i<=right;i++)
    {
        if(arr[i]>kp)
        {
           f(left,i-1);
           f(i,right);
           return ;
        }
    }

}

void solve()
{
   v.clear();
   cin>>n>>q;
   for(int i=0;i<n;i++)cin>>arr[i];
   sort(arr,arr+n);
   f(0,n-1);
   sort(v.begin(),v.end());
  // int q;
   //cin>>q;
   while(q--)
   {
       int k;
       cin>>k;
       int l=0,r=v.size()-1;
       bool tr=false;
       while(l<=r)
       {
           int mid=(l+r)/2;
           if(v[mid]==k)
           {
               tr=true;
               break;
           }
           else if(v[mid]>k)
           {
               r=mid-1;
           }
           else l=mid+1;
       }
       if(tr)cout<<"Yes"<<"\n";
       else cout<<"No"<<"\n";
   }
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
