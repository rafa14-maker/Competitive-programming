#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 3e5+5;


void solve()
{
   // cout<<"yes"<<endl;
   int n;
   cin>>n;
   char c ;
   cin>>c;

   bool tr=true;

   string s;
   cin>>s;
   vector<int>idx;

   for(int i=0;i<s.size();i++)
   {
       if(s[i]!=c)idx.push_back(i+1);
   }


   for(int i=0;i<s.size();i++)
   {
       if(s[i]!=c)tr=false;
   }

   if(tr||idx.size()==0)
   {
       cout<<"0"<<endl;
       return ;
   }

  int len = s.size();

  if(s[len-1]==c)
  {
      cout<<1<<endl;
      cout<<n<<endl;
      return ;
  }
  else
  {
      for(int i=n-1;i>=n/2;i--)
      {
          if(s[i]==c)
          {
              cout<<"1"<<endl;
              cout<<i+1<<endl;
              return ;
          }
      }

     cout<<2<<endl;
     cout<<n<<" "<<n-1<<endl;
  }

}

int main()
{
   int q;cin>>q;while(q--)solve();
   //solve();
}

