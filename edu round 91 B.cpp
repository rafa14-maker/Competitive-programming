#include<bits/stdc++.h>
using namespace std;

void solve()
{
   string str;
   cin>>str;
   int r=0,s=0,p=0;
   for(int i=0;i<str.size();i++)
   {
       if(str[i]=='R')r++;
       else if(str[i]=='S')s++;
       else if(str[i]=='P')p++;
   }
  // cout<<s<<" "<<r<<" "<<p<<endl;
   vector<pair<int,int> >v;
   v.push_back(make_pair(r,0));
   v.push_back(make_pair(s,1));v.push_back(make_pair(p,2));
   sort(v.begin(),v.end());
   int len=v.size()-1;
   char ch;
   if(v[len].second==0)ch='P';if(v[len].second==1)ch='R';if(v[len].second==2)ch='S';
   for(int i=0;i<str.size();i++)cout<<ch;
   cout<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();

    //solve();
}

