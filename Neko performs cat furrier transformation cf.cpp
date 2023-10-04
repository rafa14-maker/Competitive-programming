#include<bits/stdc++.h>
using namespace std;

bool Check(int n,int pos)
{
    return (n & (1<<pos));
}

void solve()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<=20;i++)
    {
        if(!Check(n,i)&&pow(2,i)<=n)
        {
            v.push_back(i);
        }
    }
    cout<<v.size()*2<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

}

int main()
{
    solve();
}
