#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=-n;i<=n;++i)
    {
        int mid=n-abs(i);
        for(int j=0;j<abs(i);++j)
        {
            cout<<"  ";
        }
        for(int j=0;j<mid;++j)
        {
            cout<<j<<" ";
        }
        for(int j=mid;j>0;--j)
        {
            cout<<j<<" ";
        }
        cout<<0<<endl;
    }
}
