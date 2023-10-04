#include<bits/stdc++.h>
using namespace std;


void solve()
{
  //  cout<<"404"<<endl;

  int n,m,x,y;
  cin>>n>>m>>x>>y;

  //cout<<n<<" "<<y<<" "<<x<<" "<<m<<endl;

  vector<pair<int,int> >v;

  v.push_back(make_pair(1,1));
  v.push_back(make_pair(1,m));
  v.push_back(make_pair(n,1));
  v.push_back(make_pair(n,m));

  long long sum=0,x1=1,y1=1,x2=1,y2=1;

  for(int i=0;i<4;i++)
  {
      for(int j=0;j<4;j++)
      {
          int a1=v[i].first;
          int b1=v[i].second;
          int a2=v[j].first;
          int b2=v[j].second;

          long long k = abs(a1-x)+abs(b1-y);
              k+= abs(a2-a1)+abs(b2-b1);

          if(sum<=k)
          {
              sum=k;
              x1=a1,y1=b1,x2=a2,y2=b2;
          }
      }
  }

  cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;

}

int main()
{
    int q;cin>>q;while(q--)solve();
  //solve();
}

