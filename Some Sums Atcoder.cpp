#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int flag=0;
    for(int i=1;i<=n;i++)
    {
        int k=i,sum=0;
        while(k>0)
        {
            sum+=(k%10);
            k/=10;
        }
        if(sum>=a&&sum<=b)flag+=i;
    }
    cout<<flag<<endl;
}
