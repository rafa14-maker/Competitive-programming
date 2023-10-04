#include<bits/stdc++.h>
using namespace std;

const int N = 2e5+5;

using ll=long long;
#define hello ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define read()          freopen("in.txt","r",stdin)
#define write()         freopen("out.txt","w",stdout)
#define en   "\n"

int arr[N],frr[N];

vector<int>v;
set<int>st;
map<char,bool>mp;

void bk()
{
    v.clear();
    st.clear();
    mp.clear();
}

void solve()
{
  //bk();
   string a[3],b[3],c[3];
     vector<char>v;
     vector<string>h;
     vector<string>l;

  for(int i=0;i<3;i++)
  {
   cin>>a[i]>>b[i]>>c[i];
   if(c[i]=="even")
   {
       for(int j=0;j<a[i].size();j++)
       {
           v.push_back(a[i][j]);
       }
       for(int j=0;j<b[i].size();j++)
       {
           v.push_back(b[i][j]);
       }
   }
   else{
       if(c[i]=="up")
       {
           l.push_back(b[i]);
           h.push_back(a[i]);
       }
       else
       {
           h.push_back(b[i]);
           l.push_back(a[i]);
       }
   }
  }
//for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
  for(char i='A';i<='L';i++)
  {
  bool tr=true;
      for(int j=0;j<v.size();j++)
      {
          if(v[j]==i)
          {
              tr=false;
          }
      }
      if(tr){
      int flag=0;
      for(int j=0;j<l.size();j++)
      {
          for(int k=0;k<l[j].size();k++)
          {
              if(l[j][k]==i)
              {
                  flag++;
                  break;
              }
          }

      }
      if(l.size()==flag)
      {
          printf("%c is the counterfeit coin and it is light.\n",i);
          return;
      }
      flag=0;
      for(int j=0;j<h.size();j++)
      {
          for(int k=0;k<h[j].size();k++)
          {
              if(h[j][k]==i)
              {
                  flag++;
                  break;
              }
          }

      }
      if(l.size()==flag)
      {
          printf("%c is the counterfeit coin and it is heavy.\n",i);
          return;
      }
      }
  }

}


int main()
{
    hello;
  int q;cin>>q;while(q--)solve();

   // solve();
}

