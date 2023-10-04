#include<bits/stdc++.h>
using namespace std;
#define maxn 600001

pair<int,int>arr[maxn];

int main()
{
   freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

      int n,i;
      scanf("%d",&n);

      n*=2;

      for(int i=1;i<=n;i++)
      {
          scanf("%d",&arr[i].first);
          arr[i].second=i;
      }

      sort(arr+1,arr+n+1);

      for(i=1;i<=n;i+=2)
      {
          if(arr[i].first!=arr[i+1].first)
          {
              printf("-1\n");
              return 0;
          }
      }
      for(i=1;i<=n;i+=2)
      {
          printf("%d %d",arr[i].second,arr[i+1].second);
          if(i+1<n)printf("\n");
      }
      return 0;
}
