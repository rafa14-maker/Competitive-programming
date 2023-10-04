#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long a,b;
    cin>>a>>b;
    if(a<=b)
    {
        cout<<b-a<<endl;
        return ;
    }
    int cnt=0;
    while(a>b)
    {
        if(a%2==0)a/=2;
        else a++;
        cnt++;
    }
   if(a<b) cnt+=(b-a);
   cout<<cnt<<endl;
}

int main()
{
    solve();
}
