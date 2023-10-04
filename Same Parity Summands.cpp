#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,k;
        cin>>n>>k;
        int r=n-k+1;
        if(r%2==1&&r>0)
        {
            cout<<"YES"<<endl;
            for(int i=0;i<k-1;i++)cout<<1<<" ";
            cout<<r<<endl;
            continue;
        }
        int l=n-((k-1)*2);
        if(l%2==0&&l>0)
        {
              cout<<"YES"<<endl;
            for(int i=0;i<k-1;i++)cout<<2<<" ";
            cout<<l<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
}
