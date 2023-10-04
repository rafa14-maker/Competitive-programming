#include<bits/stdc++.h>
using namespace std;

int n,m;

void solve(int test)
{
    double arr[m+5];
   vector<double>adj[n+5];
    for(int i=0;i<m;i++)cin>>arr[i];
    sort(arr,arr+m);
    reverse(arr,arr+m);
    int idx=0;

    double sum=0;

   for(int i=0;i<n;i++)
   {
       adj[i].push_back(arr[idx]);
       sum+=arr[idx];
       idx++;
       if(idx>=m)break;
   }

     for(int i=n-1;i>=0;i--)
   {
       if(idx>=m)break;
       adj[i].push_back(arr[idx]);
       sum+=arr[idx];
       idx++;
      // if(idx>=m)break;
   }

   sum/=n;

   double cnt=0;

   printf("Set #%d\n",test);

   for(int i=0;i<n;i++)
   {
       printf(" %d:",i);
       double pk=0;
       for(int j=0;j<adj[i].size();j++)
       {
           printf(" %d", (int)adj[i][j]);
           pk+=adj[i][j];
       }
       cnt+=fabs(pk-sum);
       printf("\n");
   }

    printf( "IMBALANCE = %.5lf\n\n", cnt );

}

int main()
{
    int test=0;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        solve(++test);
    }
}
