#include<bits/stdc++.h>
using namespace std;

void solve(int n)
{
      vector<pair<int,int> >v;

      for(int i=n;;i++)
      {
          int a=i*n;
          int b=i-n;
          if(b<=0)continue;
          if(a%b==0)
          {
              v.push_back(make_pair(a/b,i));
          }
          if(a/b==i)break;
      }

      cout<<v.size()<<endl;
      for(int i=0;i<v.size();i++)
      {
          printf("1/%d = 1/%d + 1/%d\n",n,v[i].first,v[i].second);
      }
}

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        solve(n);
    }
}
