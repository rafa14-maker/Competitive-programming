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
        map<int,int>mp;
        int counter=0;
        set<int>s;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            int a;
            int flag=0;
            for(int i=0;i<k;i++)
            {
                cin>>a;
                s.insert(a);
                if(flag==0&&mp[a]==0)
                {
                    mp[a]=1;
                    flag++;
                    counter++;
                }
            }
            if(flag==0)v.push_back(i+1);
        }
        if(counter==n)cout<<"OPTIMAL"<<endl;
        else
        {
            cout<<"IMPROVE"<<endl;
            cout<<v[0]<<" ";
            set<int>::iterator it;
            for(int i=1;i<=1e5;i++)
            {
               if(mp[i]==0)
               {
                   cout<<i<<endl;
                   break;
               }
            }
        }
    }
}
