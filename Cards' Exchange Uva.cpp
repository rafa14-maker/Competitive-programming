#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        int n,m;
        cin>>n>>m;
        if(n==0&&m==0)break;
        set<int>s1;
        set<int>s2;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            s1.insert(a);
        }
        for(int i=0;i<m;i++)
        {
              int a;
            cin>>a;
            s2.insert(a);
        }
        set<int>::iterator it;
        for(it = s1.begin();it!=s1.end();it++)
        {
            mp[*it]++;
        }
          for(it = s2.begin();it!=s2.end();it++)
        {
            mp[*it]++;
        }

        int counter=0,flag=0;
         for(it = s1.begin();it!=s1.end();it++)
        {
           if(mp[*it]==1)counter++;
        }
          for(it = s2.begin();it!=s2.end();it++)
        {
            if(mp[*it]==1)flag++;
        }

        cout<<min(flag,counter)<<endl;

    }
}
