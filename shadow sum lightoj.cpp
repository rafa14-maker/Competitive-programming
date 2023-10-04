#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int test;

struct node
{
    int idx;
    int val;
    int rval;
};

bool cmp(node a,node b)
{
    if(a.val < b.val)return true;
    else if(a.val == b.val && a.idx < b.idx)return true;
    return false;
}

void solve()
{
   // cout<<"yes"<<endl;

   int n;
   cin>>n;

   vector<node>v;

   for(int i =0 ;i<n;i++)
   {
       node pdx;
       int a;
       cin>>a;
       int b;
       if(a<0)b = a*(-1);
       else b = a;
       pdx.idx = i;
       pdx.val = b;
       pdx.rval = a;
       v.push_back(pdx);
   }

   sort(v.begin(),v.end(),cmp);

   int sum = 0;

  for(int i=0;i<v.size();i++)
  {
      node pdx = v[i];
      if(i == v.size()-1)
      {
          sum += pdx.rval;
      }
      else
      {
            node dx = v[i+1];
          if(dx.val != pdx.val )
          {
              sum += pdx.rval;
          }
      }
  }

  printf("Case %d: %d\n",++test,sum);

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

