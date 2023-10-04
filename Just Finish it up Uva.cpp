#include<bits/stdc++.h>
using namespace std;
typedef long long lag;

const int N = 1e6+5;

int t,p[N],q[N],tc,n;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)cin>>p[i];
        for(int i=0;i<n;i++)cin>>q[i];
        lag sum=0,mn=LLONG_MAX;

        for(int i=0;i<n;i++)
        {
            sum+=p[i]-q[i];
            mn=min(mn,sum);
        }
        int index=0;
        while(mn<0&&index<n)
        {
            mn-=p[index]-q[index++];
        }
       printf("Case %d: ",++tc);
       if(index==n||sum<0)cout<<"Not possible\n";
       else printf("Possible from station %d\n",index+1);
    }
}
