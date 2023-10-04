#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
     priority_queue <int>pq;
     for(int i=0;i<n;i++)
     {
         int a;
         cin>>a;
         pq.push(a);
     }
     long long sum=0;
     while(!pq.empty())
     {
         long long f=pq.top();
      //   cout<<f<<" ";
         sum+=f;
         pq.pop();
     }
   //  cout<<endl;
     long long pk=sum/k;
     long long gk=0;
     if(sum%k!=0)gk=sum%k;

     long long mx=0;

     for(int i=1;i<=k;i++)
     {
         if(i<=gk)mx+=((pk+1)*(pk+1));
         else mx+=(pk)*(pk);
     }

     cout<<mx<<endl;
}

int main()
{
   // int q;cin>>q;while(q--)solve();
    solve();
}
