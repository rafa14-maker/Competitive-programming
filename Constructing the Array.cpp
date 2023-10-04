#include<bits/stdc++.h>
using namespace std;

using ll = long long ;

void solve()
{
   int n;
   cin>>n;
   deque<pair<int,int> >dq;
   int arr[n+5]={0};
   dq.push_back(make_pair(1,n));
   int counter=1;
   while(!dq.empty())
   {
       pair<int,int>p=dq.front();
       int l=p.first;
       int r=p.second;
       int mid=(l+r)/2;
       if(arr[mid]==0)
       {
           arr[mid]=counter;
           counter++;
           if(l!=mid&&r!=mid){
          if(r-mid+1+1>mid-1-l+1)
          {
            dq.push_back(make_pair(mid+1,r));
            dq.push_back(make_pair(l,mid-1));
          }
          else
          {
           dq.push_back(make_pair(l,mid-1));
           dq.push_back(make_pair(mid+1,r));
          }

           }
           else
           {
             dq.push_back(make_pair(l,l));
           dq.push_back(make_pair(r,r));
           }
       }
       dq.pop_front();
   }
   for(int i=1;i<=n;i++)cout<<arr[i]<<" ";cout<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        solve();
    }
  //  solve();
}
