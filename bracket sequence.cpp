#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<pair<int,char> >v;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')
        {
            v.push_back(make_pair(1,'('));
             v.push_back(make_pair(0,')'));
        }
       else if(s[i]==')')
        {
            v.push_back(make_pair(0,'('));
             v.push_back(make_pair(1,')'));
        }
      else  if(s[i]=='[')
        {
            v.push_back(make_pair(1,'['));
             v.push_back(make_pair(0,']'));
        }
      else  if(s[i]==']')
        {
            v.push_back(make_pair(0,'['));
             v.push_back(make_pair(1,']'));
        }
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i].first==1&&v[i].second=='(')
        {
            for(int j=i+1;j<v.size();j++)
            {
                if(v[j].first==1&&v[j].second=='(')break;
                if(v[j].first==1&&v[j].second==')')
                {
                    v[j].first=8;
                    v[i].first=8;
                    for(int k=j-1;k>i;k--)
                    {
                        if((v[k].second=='('||v[k].second==')')&&v[k].first==0)
                        {
                            v[k].first=9;
                        }
                    }
                    break;
                }
            }
        }
       else  if(v[i].first==1&&v[i].second=='[')
        {
            for(int j=i+1;j<v.size();j++)
            {
                if(v[j].first==1&&v[j].second=='[')break;
                if(v[j].first==1&&v[j].second==']')
                {
                    v[j].first=8;
                    v[i].first=8;
                    for(int k=j-1;k>i;k--)
                    {
                        if((v[k].second=='['||v[k].second==']')&&v[k].first==0)
                        {
                            v[k].first=9;
                        }
                    }
                    break;
                }
            }
        }
    }

      for(int i=0;i<v.size();i++)
    {
        if(v[i].first==1&&v[i].second==')')
        {
            for(int j=i-1;j>=0;j--)
            {
                if(v[j].first==1&&v[j].second==')')break;
                if(v[j].first==1&&v[j].second=='(')
                {
                    v[j].first=8;
                    v[i].first=8;
                    for(int k=i;k>j;k--)
                    {
                        if((v[k].second=='('||v[k].second==')')&&v[k].first==0)
                        {
                            v[k].first=9;
                        }
                    }
                    break;
                }
            }
        }
       else  if(v[i].first==1&&v[i].second==']')
        {
            for(int j=i-1;j>=0;j--)
            {
                if(v[j].first==1&&v[j].second==']')break;
                if(v[j].first==1&&v[j].second=='[')
                {
                    v[j].first=8;
                    v[i].first=8;
                    for(int k=i-1;k>j;k--)
                    {
                        if((v[k].second=='['||v[k].second==']')&&v[k].first==0)
                        {
                            v[k].first=9;
                        }
                    }
                    break;
                }
            }
        }
    }



    for(int i=0;i<v.size();i++)
    {
        if(v[i].first!=9)cout<<v[i].second;
    }
    cout<<endl;
}
