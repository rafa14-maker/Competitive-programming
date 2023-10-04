#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        string s="";
        int idx=0;
        for(int i=0;i<n;i++)
        {
            s+=('a'+idx);
            idx++;
            if(idx==b)idx=0;
        }
        cout<<s<<"\n";
    }
}
