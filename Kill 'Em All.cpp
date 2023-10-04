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
        vector<long long>v;
        for(int i=0;i<n;i++)
        {
             long long a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.rbegin(),v.rend());
        int counter=0,flag=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==v[i+1])continue;
            if(v[i]-flag>0)counter++,flag+=k;
        }
        cout<<counter<<endl;
    }
}
