#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v;
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            v.push_back(i);
            n/=i;
        }
    }
    if(n>1)v.push_back(n);

    if(v.size()<k)
    {
        cout<<-1<<endl;
        return 0;
    }

    if(v.size()==k)
    {
        for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
        cout<<endl;
    }
    else
    {
        int c=v.size()-k;
        for(int i=0;i<v.size();i++)
        {
            if(c>0)
            {
                c--;
                v[i+1]*=v[i];
            }
            else cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
