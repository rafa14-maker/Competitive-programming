#include<bits/stdc++.h>
using namespace std;

char arr[5]={'A','B','C','D','E'};

vector<pair<char,char> >v;

string frr;

bool Check(int n,int pos)
{
    return (n & (1<<pos));
}

int Set(int n,int pos)
{
    return (n | (1<<pos));
}

int yo(string p)
{
    int counter=0;
    for(int i=0;i<v.size();i++)
    {
        char a=v[i].first,b=v[i].second;
        int flag1=0,flag2=0;
        for(int i=0;i<p.size();i++)
        {
            if(p[i]==a)flag1=i;
            if(p[i]==b)flag2=i;
        }
        if(flag1>flag2)
        {
            counter++;
            break;
        }
    }
    if(counter==0)return true;
    else return false;
}


void f(int mask,string s)
{
   if(s.size()==5)
   {
      if(yo(s))frr=s;
   }

   for(int i=0;i<5;i++)
   {
      if(!Check(mask,i))
      {
          f(Set(mask,i),s+arr[i]);
      }
   }
}

int main()
{
    for(int i=0;i<5;i++)
    {
        string s;
        cin>>s;
        if(s[1]=='<'){
        v.push_back(make_pair(s[0],s[2]));}
        else
        {
            v.push_back(make_pair(s[2],s[0]));
        }

    }
    frr="";
        f(0,frr);
        if(frr.size()!=0)cout<<frr<<endl;
        else cout<<"impossible"<<endl;
}
