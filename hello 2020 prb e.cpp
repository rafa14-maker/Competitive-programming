#include<bits/stdc++.h>
using namespace std;

int q;
int n,k,tot;
vector<int>arr;
string frr;

int dp[200][10005][10005];

int f(int pos,int left,int right,string s)
{
   if(pos)

   int ans=0;
   if(left-arr[pos]>=0)ans=max(ans,1+f(pos+1,left-arr[pos],right,s+'l'));
   if(right-arr[pos]>=0)ans=max(ans,1+f(pos+1,left,right-arr[pos],s+'r'));
   return dp[pos][right][left]=ans;
}

int main()
{
    cin>>q;
    while(q--)
    {
        frr="";
        scanf("%d",&k);
       k*=100;
        arr.clear();
        while(1)
        {
           int a;
            scanf("%d",&a);
           if(a!=0) arr.push_back(a);
           else break;
        }
        memset(dp,-1,sizeof dp);
         tot=f(0,k,k,frr);
         printf("%d\n",tot);
           for(int i=0;i<frr.size()-1;i++)
           {
               if(frr[i]=='l')printf("port\n");
               else printf("standard\n");
           }
       // print_f(0,k,k,tot);
    }
}
