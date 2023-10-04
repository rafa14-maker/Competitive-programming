#include<bits/stdc++.h>
using namespace std;

 using ll = long long;


#define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


void solve()
{
      int n;
      cin>>n;
      string s;
      cin>>s;

      string frr="abacaba";

      bool tr=false;


      int counter=0;


      for(int i=0;i<s.size();i++)
      {
          if(i+frr.size()-1<s.size())
          {
              bool pp=true;
              for(int j=0;j<frr.size();j++)
              {
                  if(frr[j]!=s[i+j])pp=false;
              }
              if(pp)counter++;
          }
      }

      if(counter==1)
      {
          cout<<"Yes"<<endl;

          for(int i=0;i<s.size();i++)if(s[i]=='?')s[i]='z';

          cout<<s<<endl;
          return ;
      }

      if(counter>1)
      {
          cout<<"No"<<endl;
          return;
      }




      for(int i=0;i<s.size();i++)
      {
          if(s[i]=='?'&&tr)
          {
              s[i]='z';
          }
          else
          {
              if(i+frr.size()-1<s.size()){
                    bool pp=true;
              for(int j=0;j<frr.size();j++)
              {
                  if(s[i+j]=='?')s[i+j]=frr[j];
                   else if(s[i+j]!=frr[j])pp=false;
              }
              if(pp)
              {
                  tr=true;
              }
              }
          }
      }

    counter=0;


      for(int i=0;i<s.size();i++)
      {
          if(i+frr.size()-1<s.size())
          {
              bool pp=true;
              for(int j=0;j<frr.size();j++)
              {
                  if(frr[j]!=s[i+j])pp=false;
              }
              if(pp)counter++;
          }
      }

      if(counter==1)
      {
          cout<<"Yes"<<endl;
          for(int i=0;i<s.size();i++)if(s[i]=='?')s[i]='z';
          cout<<s<<endl;
      }
      else
      {
          cout<<"No"<<endl;
      }

}


int main()
{
    FasterIO

   int q;cin>>q;while(q--)solve();

   // solve();
}
