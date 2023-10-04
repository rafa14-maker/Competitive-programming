#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            cout<<"()";
        }

        {
            for(int j=i;j<=n;j++)cout<<"(";
            for(int j=i;j<=n;j++)cout<<")";
        }
        cout<<endl;
    }

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
