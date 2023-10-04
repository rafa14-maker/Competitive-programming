#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   int n;
   cin>>n;
   int arr[n+5];
   for(int i=1;i<=n;i++)arr[i]=0;
   queue<int>q;
   int m;
  // cin>>m;
   for(int i=1;i<=n;i++)
   {
       int a,b;
       cin>>a>>b;
       for(int i=a;i<=b;i++)arr[i]++;
   }

   for(int i=1;i<=n;i++)
   {
      if(arr[i]==1) q.push(i),arr[i]=0;
   }

  // vector<pair<int,pair<int,int> > >v;

   int l,r;
    l =1 , r = n;

    vector<pair<int,int> > v;
    v.push_back(make_pair(l,r));

    while(!q.empty())
    {
     //   cout<<"yes"<<endl;
        int cnt = q.front();
        q.pop();
       // cout<< cnt<<endl;
        for(int i=0;i<v.size();i++)
        {
            int l = v[i].first;
            int r = v[i].second;
            if(l<=cnt&&r>=cnt)
            {
               cout <<l<<" "<<r<<" "<<cnt<<endl;
                for(int i=l;i<=r;i++)
                {
                    arr[i]--;
                    if(arr[i]==1)q.push(i);
                }
                if(l>=1&&cnt-1>=l)v.push_back(make_pair(l,cnt-1));
                 if(r>=1&&cnt+1<=r)v.push_back(make_pair(cnt+1,r));
                v[i].first = -1;
                v[i].second = -1;
                break;
            }
        }
    }

}

int main()
{
    CherryFrog;
    //cout <<"All in!"<<endl;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

