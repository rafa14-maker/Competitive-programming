#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        set<int>s;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            a=(a+i)%n;
            if(a<0)a+=n;
            s.insert(a);
        }
        if(s.size()==n)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
