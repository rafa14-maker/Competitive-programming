#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n==0)break;
        int p = n%5;
        if(p==1)cout<<"0.40"<<endl;
        else if(p==2)cout<<"0.20"<<endl;
        else if(p==3)cout<<"0.20"<<endl;
        else if(p==4)cout<<"0.60"<<endl;
        else if(p==0)cout<<"0.00"<<endl;
    }
}

int main()
{
     solve();
}
