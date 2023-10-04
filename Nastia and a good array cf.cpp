#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
 /*  // cout<<"yes"<<endl;
   int n;
   cin>>n;
   ll arr[n+5];
   for(int i=0;i<n;i++)cin>>arr[i];

   if(n==1)
   {
       cout<<0<<endl;
       return ;
   }

  /*  if(n==2)
   {
       int k = __gcd(arr[0],arr[1]);
       if(k==1)
       {
           cout<<0<<endl;
       }
       else
       {
           cout<<1<<endl;
           cout<<1<<" "<<2<<" "<<arr[0]<<" "<<arr[0]+1<<endl;
       }
       return ;
   }*/

  // ll frr[n+5][5];

 //  int idx = 0;

 /* for(int i=0;i<n;i++)
   {
       ll k1  = __gcd(arr[i-1],arr[i]);
       ll k2 = __gcd(arr[i],arr[i+1]);
       if(k1==1&&k2==1)continue;
       ll a = arr[i-1];
       ll b = arr[i+1];
       ll k3 = __gcd(a,b);
       if(a>b)
       {
           ll c;
           if(k3>1)c = a+1;
           else c = a+(a%b);

           frr[idx][0] = i-1;
           frr[idx][1] = i;
           frr[idx][2] = arr[i-1];
           frr[idx][3] = c;
           idx++;
       }
       else if(a<b)
       {
            ll c;
           if(k3>1)c = b+1;
           else c = b+(b%a);+

           frr[idx][0] = i;
           frr[idx][1] = i+1;
           frr[idx][2] = c;
           frr[idx][3] = arr[i+1];
           idx++;
       }
       else
       {
           ll c;
           if(k3>1)c = a+1;
           else c = a+(a%b);

           frr[idx][0] = i-1;
           frr[idx][1] = i;
           frr[idx][2] = arr[i-1];
           frr[idx][3] = c;
           idx++;
       }
   } */

  /* for(int i=0;i<n;i+=2)
   {
       int k1 = __gcd(arr[i],arr[i+1]);
       int k2 = __gcd(arr[i+1],arr[i+2]);
       if(k1==1&&k2==1)continue;

   } */

/*
   priority_queue<pair<ll,ll> >pq;

   for(int i=0;i<n;i++)
   {
       pq.push(make_pair(-arr[i],i));
   }

   while(!pq.empty())
   {
       pair<ll,ll>f = pq.top();
       pq.pop();
       ll a = (-1)*f.first;
       ll b = f.second;
      // cout<<a<<" "<<b<<endl;
       if(a!=arr[b])
       {
           pq.push(make_pair(-arr[b],b));
         //  cout<<"kp"<<endl;
       }
       else
       {
           if(b-1>=0&&arr[b-1]>=arr[b])
           {
                 frr[idx][0] = b-1;
                  frr[idx][1] = b;
                  frr[idx][2] = a+1;
                   frr[idx][3] = a;
                   idx++;
                   arr[b-1] = a+1;
           }
           if(b+1<n&&arr[b+1]>=arr[b])
           {
                 frr[idx][0] = b;
                   frr[idx][1] = b+1;
                  frr[idx][2] = a;
                    frr[idx][3] = a+1;
                    idx++;
                    arr[b+1] = a+1;
           }
       }
   }

   cout<<idx<<endl;

   for(int i=0;i<idx;i++)
   {
       cout<<frr[i][0]+1<<" "<<frr[i][1]+1<<" "<<frr[i][2]<<" "<<frr[i][3]<<endl;
   }

   */

   // i was not able to solve it

   // so i have seen the tutorial

   int n;
   cin>>n;

   int arr[n+5];
  int idx = 0 , mn = 1e9+7;

  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
      if(arr[i]<mn)
      {
          mn = arr[i];
          idx = i;
      }
  }

   cout<< n-1<<endl;

   for(int i=0;i<n;i++)
   {
       if(idx==i)continue;
       cout<<idx+1<<" "<<i+1<<" "<<mn<<" "<<mn + abs(idx-i)<<endl;
   }


}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
  // solve();
}

