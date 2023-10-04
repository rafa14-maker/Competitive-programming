#include<bits/stdc++.h>
using namespace std;

string s[]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
int mon[]={31,28,31,30,31,30,31,31,30,31,30,31};

void solve()
{
    int n,k;
    cin>>n>>k;
    int sum=0;
    for(int i=0;i<n-1;i++)sum+=mon[i];
    sum+=k;
    sum--;
    cout<<s[sum%7]<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
