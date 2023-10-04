#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    if(n>36)cout<<-1<<endl;
    else
    {
        int k = n/2;
        if(n%2==1)cout<<4;
        n--;
        while(k--)cout<<"8";
        cout<<endl;
    }
}

int main()
{
    solve();
}
