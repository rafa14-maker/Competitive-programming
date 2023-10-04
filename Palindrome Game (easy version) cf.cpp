#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int k=0;
    for(int i=0;i<n;i++)
    {
        char a;
        cin>>a;
        if(a=='0')k++;
    }

    if(k%2==0||k==1)cout<<"BOB"<<endl;
    else cout<<"ALICE"<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
