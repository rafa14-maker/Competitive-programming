#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N = 131072;
int frr[35][2];

bool Check(int n,int pos)
{
    return (n & (1<<pos));
}
int Set(int n,int pos)
{
    return (n | (1<<pos));
}

void solve()
{
   int l,r;
   cin>>l>>r;
   memset(frr,0,sizeof frr);
   int n = r+1;
   int arr[n+5];
   for(int i=0;i<n;i++)cin>>arr[i];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<=30;j++)
       {
           if(Check(arr[i],j))frr[j][1]++;
           else frr[j][0]++;
       }
   }
   int x = 0;
   for(int i=0;i<=30;i++)
   {
       if(frr[i][1]>frr[i][0]) x = Set(x,i);
   }
   cout << x << endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 // solve();
}
