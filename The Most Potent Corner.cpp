#include<bits/stdc++.h>
using namespace std;

int n;
int edges[20000];
int sum[20000];

int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        int num_edges = pow(2,n);
        int max_sum=0;
        for(int i=0;i<num_edges;i++)
        {
           scanf("%d", &edges[i]);
        }

          for(int i=0;i<num_edges;i++)
            {
              int edge_sum=0;
            for(int j=0;j<n;j++)
            {
                int b=i^(1<<j);
                edge_sum+=edges[b];
            }
            sum[i]=edge_sum;
        }
        for(int i=0;i<num_edges;i++)
        {
            for(int j=0;j<n;j++)
            {
                int b=i^(1<<j);
                max_sum=max(max_sum,sum[i]+sum[b]);
            }
        }
        printf("%d\n",max_sum);
    }
}
