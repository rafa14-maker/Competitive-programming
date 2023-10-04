#include<bits/stdc++.h>
using namespace std;

int n;
vector<string>dic;
vector<string>rules;

string rul;

void f(int pos,string s)
{
    if(pos==rul.size())
    {
        cout<<s<<endl;
        return;
    }
    if(rul[pos]=='0')
    {
        for(char i='0';i<='9';i++)
        {
            f(pos+1,s+i);
        }
    }
    else if(rul[pos]=='#')
    {
        for(int i=0;i<dic.size();i++)
        {
            f(pos+1,s+dic[i]);
        }
    }
}

void solve(int n)
{
   dic.clear();
   rules.clear();
   for(int i=0;i<n;i++)
   {
       string s;
       cin>>s;
       dic.push_back(s);
   }
   int m;
   cin>>m;
   for(int i=0;i<m;i++)
   {
       string s;
       cin>>s;
       rules.push_back(s);
   }
   cout<<"--"<<endl;
   for(int i=0;i<rules.size();i++)
   {
       rul=rules[i];
       f(0,"");
   }
}

int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        solve(n);
    }
}
