#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,m;
    cin>>n>>k>>m;
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
        int a;
        cin>>a;
        sum+=a;
    }
   // cout<<sum<<endl;
    for(int i=0;i<=k;i++)
    {
        if(((sum+i)/n)>=m)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
}
