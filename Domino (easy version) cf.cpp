#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    if(m==1)
    {
        cout<<"NO"<<endl;
        return ;
    }
    if(n==1)
    {
       if((m*n)/2==k) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
       return ;
    }

    if((m%2==0)&&(n%2==0))
    {
        int pk = n*m;
        pk/=2;
        if(pk>=k)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        return ;
    }

    if(m%2==1)
    {
        int pk = n*(m-1);
        pk/=2;
         if(pk>=k)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        return ;
    }

    if(n%2==1)
    {
         int pk = (n-2)*(m);
        pk/=2;
         if(pk>=k)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        return ;
    }

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
