#include<bits/stdc++.h>
using namespace std;

int f(char c)
{
    return (int)c-'0';
}
#define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    FasterIO
    int n,p;
    scanf("%d %d",&n,&p);
    string s;
    cin>>s;
    long long counter=0;
    for(int i=n-1;i>=0;i--)
    {
        long long sum=0;
        for(int j=i;j>=0;j--)
        {
            sum+=f(s[j]);
           // cout<<f(s[j])<<" ";
            sum%=p;
            sum*=10;
            if(sum==0)counter++;
        }

    }
   printf("%lld\n",counter);
}
