#include<bits/stdc++.h>
using namespace std;

string s;

string frr;

vector<char>v;

void f(string arr)
{
   // cout<<arr<<endl;
    if(arr.size()==s.size()||arr>s)
    {
        if(arr>s&&arr.size()==s.size())
        {
            frr=min(frr,arr);
        }
        return ;
    }
    for(int i=0;i<v.size();i++)
    {
        f(arr+v[i]);
    }
}

int main()
{
   frr="99999999999999999";
   cin>>s;
    for(int i=0;i<s.size();i++)
    {
        int flag=0;
        for(int j=0;j<v.size();j++)
        {
            if(v[j]==s[i])
            {
                flag++;
                break;
            }
        }
        if(flag==0)v.push_back(s[i]);
    }

    for(int i=0;i<v.size();i++)
    {
        string arr;
        arr+=v[i];
        f(arr);
    }
  cout<<frr<<endl;
}
