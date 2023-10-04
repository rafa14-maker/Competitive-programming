#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int n,k;
   cin>>n>>k;
   int len =n*k;
   /*int frr[len+5];
   for(int i=0;i<len;i++)cin>>frr[i];
   sort(frr,frr+len);
   int idx=0;
   int arr[k+5][n+5];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<k;j++)
       {
           arr[j][i]=frr[idx];
           idx++;
       }
   }
   long long sum=0;
   for(int i=0;i<k;i++)sum+=arr[i][n/2-1];
   cout<<sum<<endl;*/


   deque<int>dq;

   for(int i=0;i<len;i++)
   {
       int a;
       cin>>a;
       dq.push_back(a);
   }

   long long sum=0;

   while(!dq.empty())
   {
       if(n%2==1)
       {
           for(int i=0;i<n/2;i++)
           {
               dq.pop_back();
           }
           sum+=dq.back();
           dq.pop_back();
           for(int i=0;i<n/2;i++)
           {
               dq.pop_front();
           }
       }
       else
       {
           for(int i=0;i<n/2;i++)
           {
               dq.pop_back();
           }
           sum+=dq.back();
           dq.pop_back();
           for(int i=0;i<n/2-1;i++)
           {
               dq.pop_front();
           }
       }
   }

   cout<<sum<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
  //  solve();
}

