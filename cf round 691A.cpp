#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    string s,f;
    cin>>s>>f;
    int cnt=0,sum=0;

    for(int i=0;i<n;i++)
    {
        if(s[i]>f[i])sum++;
        else if(s[i]<f[i])cnt++;
    }


    if(sum>cnt)cout<<"RED"<<"\n";
    else if(sum<cnt)cout<<"BLUE"<<"\n";
    else cout<<"EQUAL"<<"\n";
}

int main()
{
    int q;cin>>q;while(q--)solve();
    //solve();
}
