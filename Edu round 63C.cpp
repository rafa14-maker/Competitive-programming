#include<bits/stdc++.h>
using namespace std;

void solve()
{
      int n,m,k;
      cin>>n>>m>>k;
      long long arr[n+5],frr[m+5],krr[k+5];
      for(int i=0;i<n;i++)cin>>arr[i];
      for(int i=0;i<m;i++)cin>>frr[i];
      for(int i=0;i<k;i++)cin>>krr[i];
      sort(arr,arr+n);
      sort(frr,frr+m);
      sort(krr,krr+k);
      long long int cnt=0;
     // return;
      int idx1=n-1,idx2=m-1,idx3=k-1;
      while(1)
      {
          if(idx1<0&&idx2<0||idx1<0&&idx3<0||idx3<0&&idx2<0)break;
          if(idx1>=0&&idx2>=0&&idx3>=0)
          {
              if(arr[idx1]>=krr[idx3]&&frr[idx2]>=krr[idx3])
              {
                   cnt+=(arr[idx1]*frr[idx2]);
              idx1--;
              idx2--;
              }
              else if(arr[idx1]>=frr[idx2]&&krr[idx3]>=frr[idx2])
              {
                   cnt+=(arr[idx1]*krr[idx3]);
              idx1--;
              idx3--;
              }
             else if(frr[idx2]>=arr[idx1]&&krr[idx3]>=arr[idx1])
              {
                  cnt+=(frr[idx2]*krr[idx3]);
              idx2--;
              idx3--;
              }
          }
          else if(idx1>=0&&idx2>=0)
          {
              cnt+=(arr[idx1]*frr[idx2]);
              idx1--;
              idx2--;
          }
          else if(idx1>=0&&idx3>=0)
          {
              cnt+=(arr[idx1]*krr[idx3]);
              idx1--;
              idx3--;
          }
          else if(idx2>=0&&idx3>=0)
          {
              cnt+=(frr[idx2]*krr[idx3]);
              idx2--;
              idx3--;
          }
      }

      cout<<cnt<<endl;
}

int main()
{
    //int q;
   // cin>>q;
   // while(q--)solve();
   solve();
}

