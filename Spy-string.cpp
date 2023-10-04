#include<bits/stdc++.h>
using namespace std;

int f(string arr,string frr)
{
    int counter=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]!=frr[i])counter++;
    }
    return counter;
}

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,m;
        cin>>m>>n;
        vector<string>v;
        for(int i=0;i<m;i++)
        {
            string s;
            cin>>s;
            v.push_back(s);
        }
        string ans=v[0];
        bool tr=true;
        for(int i=1;i<v.size();i++)
        {
            if(f(ans,v[i])>1)tr=false;
        }
        if(tr)
        {
            cout<<ans<<endl;
            continue;
        }
        tr=true;
        for(int i=0;i<n;i++)
        {
            tr=true;
            ans=v[0];
            for(char j='a';j<='z';j++)
            {
                ans[i]=j;
                tr=true;
                for(int k=0;k<v.size();k++)
                {
                   if(f(ans,v[k])>1)tr=false;
                }
                if(tr)break;
            }

            if(tr)
            {
              break;
            }
        }
        if(tr)
        {
            cout<<ans<<endl;
                continue;
        }
        else cout<<-1<<endl;
    }
}
