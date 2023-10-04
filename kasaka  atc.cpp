#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

bool palin(string s)
{
     bool tr = true;

   for(int i=0,j=s.size()-1;i<j;i++,j--)
   {
       if(s[i]!=s[j])tr = false;
   }

   return tr;
}

void solve()
{
   // cout<<"yes"<<endl;

   string s;
   cin>>s;
    if(palin(s))
    {
        cout<<"Yes"<<endl;
        return ;
    }

   string frr;

   int idx=0;

   for(int i=s.size()-1;i>=0;i--)
   {
      if(s[i]=='a')idx++;
       else break;
   }

   for(int i=0;i<s.size();i++)
   {
       if(s[i]=='a')idx--;
       else break;
   }

  // string frr;

   for(int i=0;i<idx;i++)frr+='a';
   frr+=s;

   if(palin(frr))
   {
       cout<<"Yes"<<endl;
       return ;
   }

   cout<<"No"<<endl;


 ///cout<<frr<<endl;



}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}

