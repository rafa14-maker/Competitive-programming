#include<bits/stdc++.h>
using namespace std;

int arr[20][20];
int frr[20];
int n;
int dp[(1<<20)+2];

bool Check(int n,int pos)
{
    return (n & (1<<pos) );
}
int Set(int n,int pos)
{
    return (n | (1<<pos) );
}

int f(int mask,string krr)
{

    if(mask==(1<<n)-1)return 0;
    if(dp[mask]!=-1)return dp[mask];

    int ans= 1<<28;

    for(int i=0;i<n;i++)
    {
        if(!Check(mask,i))
        {
            int p=max(1,(int)(krr[i]-'0'));

            int result;
            if(frr[i]%p==0)result=frr[i]/p;
            else result=(frr[i]/p)+1;

           // cout<<result<<endl;
            string u=krr;
            int m=mask;
            for(int j=0;j<n;j++)
            {
                u[j]=max(u[j],(char)(arr[i][j]+'0'));
            }
            result+=f(Set(m,i),u);
            ans=min(ans,result);
        }

    }
    return dp[mask]=ans;
}

int main()
{
    int q;
    cin>>q;
   for(int c=1;c<=q;c++)
    {
        cin>>n;
        for(int i=0;i<n;i++)cin>>frr[i];
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            for(int j=0;j<n;j++)
            {
                arr[i][j]=(int)(s[j]-'0');
            }
        }
       memset(dp,-1,sizeof dp);

       string krr;
       for(int i=0;i<n;i++)krr+='0';

     //  for(int i=0;i<n;i++)cout<<krr[i]<<" ";cout<<endl;
    printf("Case %d: %d\n",c,f(0,krr));
        //for(int i=0;i<n;i++)cout<<krr[i]<<" ";cout<<endl;
    }
}
