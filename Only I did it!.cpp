#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    for(int c=1;c<=q;c++)
    {
        vector<int>adj[10005];
        set<int>s;
        for(int i=1;i<4;i++)
        {
            int n;
            cin>>n;
            while(n--)
            {
                int a;
                cin>>a;
                adj[a].push_back(i);
                s.insert(a);
            }
        }
        vector<int>one;
        vector<int>two;
        vector<int>three;

        set<int>::iterator it;

        for(it = s.begin();it != s.end();it++)
        {
            int i=*it;
            if(adj[i].size()==1)
            {
                int k=adj[i][0];
                if(k==1)one.push_back(i);
                if(k==2)two.push_back(i);
                if(k==3)three.push_back(i);
            }
        }
        int m=max(one.size(),max(two.size(),three.size()));
        printf("Case #%d:\n",c);
        if(m==one.size())
        {
            cout<<1<<" "<<one.size();
            for(int i=0;i<one.size();i++)cout<<" "<<one[i];
            cout<<endl;
        }
       if(m==two.size())
        {
            cout<<2<<" "<<two.size();
            for(int i=0;i<two.size();i++)cout<<" "<<two[i];
            cout<<endl;
        }
       if(m==three.size())
        {
            cout<<3<<" "<<three.size();
            for(int i=0;i<three.size();i++)cout<<" "<<three[i];
            cout<<endl;
        }
       // cout<<endl;

    }
}
