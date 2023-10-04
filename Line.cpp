#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    map<int,int>mp;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            int k;
            if(i<=a&&j<=b)
            {
                k=min(j-i,a-i+b-j+1);
            }
            else if(a<=i&&j<=b)
            {
                k=min(j-i,i-a+b-j+1);
            }
            else if(a<=i&&b<=j)
            {
                k=min(j-i,i-a+j-b+1);
            }
            else k=j-i;
            mp[k]++;
        }
    }
    for(int i=1;i<n;i++)cout<<mp[i]<<endl;
}
