#include<bits/stdc++.h>
using namespace std;

int q,n,m;

int dp[50][400][400];

vector<pair<int,int> >v;

int f(int pos,int sum1,int sum2,int counter)
{
   // cout<<pos<<" "<<sum1<<" "<<sum2<<endl;
    if(pos==n)return 99999;
    if(sqrt(sum1*sum1+sum2*sum2)==m)return counter;
    if(sqrt(sum1*sum1+sum2*sum2)>m)return 99999;
       if(dp[pos][sum1][sum2]!=-1)return dp[pos][sum1][sum2];
       int ans=99999;
       ans=min(f(pos,sum1+v[pos].first,sum2+v[pos].second,counter+1),f(pos+1,sum1,sum2,counter));
       ans=min(ans,f(pos+1,sum1+v[pos].first,sum2+v[pos].second,counter+1));
       if(dp[pos][sum1][sum2]==-1)return dp[pos][sum1][sum2]=ans;
       else return dp[pos][sum1][sum2]=min(ans,dp[pos][sum1][sum2]);
}

int main()
{
    scanf("%d",&q);
    while(q--)
    {
        v.clear();
        memset(dp,-1,sizeof dp);
        scanf("%d %d",&n,&m);
        for(int i=0;i<n;i++)
        {
            int a,b;
            scanf("%d %d",&a,&b);
            v.push_back(make_pair(a,b));
        }
       sort(v.begin(),v.end());
     //  reverse(v.begin(),v.end());
       for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(v[i].first==v[j].first&&v[i].second<v[j].second)
                {
                    swap(v[i].second,v[j].second);
                }
            }
        }

   //     for(int i=0;i<n;i++)cout<<v[i].first<<" "<<v[i].second<<endl;

        int k=f(0,0,0,0);
       if(k!=99999) printf("%d\n",k);
       else cout<<"not possible"<<"\n";
    }
}
