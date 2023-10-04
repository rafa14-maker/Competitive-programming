#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int> >v;

    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        v.push_back(make_pair(a,i));
    }
    sort(v.begin(),v.end());
    int counter=0,flag=v.size()-1;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        {
            cout<<v[counter].second<<" ";
            flag=counter;
            counter++;
        }
        else
        {
          while(v[flag].second==0)flag--;
          cout<<v[flag].second<<" ";
          v[flag].second=0;

        }
    }
}
