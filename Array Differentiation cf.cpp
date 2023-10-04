#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    bool tr=false;
    bool one =false,two=false;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==0)tr=true;
        if(arr[i]<0)one=true;
        if(arr[i]>0)two=true;
    }
    if(tr||one&&two)
    {
        cout<<"YES"<<endl;
        return ;
    }
    else
    {
       cout<<"NO"<<endl;
        return ;
    }
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
