#include<bits/stdc++.h>
using namespace std;

int n,w,p;
int arr[50];
int frr[50];

int dp[50][10005];
int k=0;



int f(int pos,int sum,int counter)
{
  //  cout<<pos<<" "<<sum<<" "<<counter<<endl;
    if(sum>n)return -1000;
    if(pos==p)
    {
        if(sum>n)return -1000;
        else if(sum<=n)
        {

            return counter;
        }
    }
    if(dp[pos][counter]!=-1)return dp[pos][counter];
    int ans=0;
   // string kr=s1;
   // kr+=(pos+'0');
    ans=max(f(pos+1,sum,counter),f(pos+1,sum+(3*arr[pos]*w),counter+frr[pos]));

    return dp[pos][counter]=ans;
}

/*
void print(int pos,int sum,int counter)
{
    if(sum>n||pos==p+1)return ;
    if(f(pos+1,sum+3*arr[pos]*w,counter+frr[pos])==dp[pos][counter])
    {
        cout<<arr[pos]<<" "<<frr[pos]<<endl;
        print(pos+1,sum+3*arr[pos]*w,counter+frr[pos]);
       // break;
            }
}
*/





int main()
{
    while(scanf("%d %d",&n,&w)==2)
    {
        scanf("%d",&p);
       // v.clear();
        memset(dp,-1,sizeof dp);
        for(int i=0;i<p;i++)
        {
            scanf("%d %d",&arr[i],&frr[i]);
        }
      //  s=" ";
        printf("%d\n",f(0,0,0));
       path_print(0,0,0);
    }
}
