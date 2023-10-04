#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    char arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int cnt = -1,pdx=0;
    for(int i=0;i<n;i++)
    {
        int k = (int)(arr[i]-'0');
        if(k%2==0&&k!=2||k%3==0&&k!=3||k==1)
        {
            cnt = k;
            pdx = 1;
        }
        for(int j=i+1;j<n;j++)
        {
            int k1 = (int)(arr[j]-'0');
            int idx = k*10+k1;
            for(int p=2;p<=9;p++)
            {
                if(idx%p==0)
                {
                   if(cnt==-1)
                   {
                       cnt=idx;
                       pdx=2;
                   }
                }
            }
        }
    }

    cout<<pdx<<endl;
    cout<<cnt<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
