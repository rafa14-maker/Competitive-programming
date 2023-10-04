#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mx = 2e5+5;
int arr[mx][3];
priority_queue<pair<int,int> >pq;

void solve()
{
   int n;
   cin>>n;
  while(!pq.empty())pq.pop();

  // priority_queue<pair<int,int> >pq;

   for(int i=0;i<n;i++)
   {
       int a;
       cin>>a;
       pq.push(make_pair(a,i+1));
   }

   int len=0;
   ll cnt=0;

   while(pq.size()>1)
   {
       pair<int,int> f1 = pq.top();
       pq.pop();
       pair<int,int> f2 = pq.top();
       pq.pop();
       if(f1.first==0||f2.first==0)break;
       int k  = min(f1.first,f2.first);
       f1.first-=k;
       f2.first-=k;
       if(f1.first>0)pq.push(f1);
       if(f2.first>0)pq.push(f2);
       arr[len][0] = f1.second;
       arr[len][1] = f2.second;
       arr[len][2] = k;
       len++;
       cnt+=k;
   }

   cout<<cnt<<endl;
   for(int i=0;i<len;i++)
   {
      while(arr[i][2]--) cout<<arr[i][1]<<" "<<arr[i][0]<<endl;
   }

}

int main()
{
 int q;
 cin>>q;
 while(q--)solve();
   //solve();
}

