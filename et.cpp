#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        vector<int>v;
        int k=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='.')k++;
            else
            {
                if(k!=0)v.push_back(k);
                k=0;
            }
        }
        if(k>0)v.push_back(k);
        sort(v.begin(),v.end());
        int counter=0,flag=0;



        for(int i=0;i<v.size();i++)
        {
            counter+=v[i];
        }
        if(counter%b==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

