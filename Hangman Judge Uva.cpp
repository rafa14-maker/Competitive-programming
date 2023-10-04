#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        int n;
        cin>>n;
        if(n==-1)break;

        string s;
        cin>>s;
        map<char,int>mp;
        set<char>st;
        set<char>ft;
        int counter=0,flag=0;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            st.insert(s[i]);
        }
        cin>>s;

        map<char,int>vis;

        for(int i=0;i<s.size();i++)
        {
            if(vis[s[i]]==0)
            {
                vis[s[i]]=1;
                if(mp[s[i]]>0)counter++;
                else flag++;
                if(counter==st.size())break;
                if(flag==7)break;
            }
        }



        printf("Round %d\n",n);
        if(flag==7)cout<<"You lose."<<endl;
        else if(counter==st.size())cout<<"You win."<<endl;
        else cout<<"You chickened out."<<endl;
    }
}
