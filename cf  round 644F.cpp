#include<bits/stdc++.h>
using namespace std;
using ll=long long ;

void solve()
{
  int k,n;
  cin>>k>>n;
  vector<string>s;
  bool fr=false;
  for(int i=0;i<k;i++)
  {
      string krr;
      cin>>krr;
      s.push_back(krr);
      //if(krr.size()>1)fr=true;
  }
  if(n==1)
  {
      cout<<s[0]<<endl;
      return ;
  }
  if(k==1)
  {
      cout<<s[0]<<endl;
      return;
  }
  int counter=0;
  int idx1=-1,idx2=-1;
  for(int i=0;i<n;i++)
  {
    if(s[0][i]!=s[1][i]){counter++;
    if(idx1==-1)idx1=i;
    else if(idx2==-1)idx2=i;}
  }
  if(counter>2)
  {
      cout<<-1<<endl;
      return;
  }
 char frr[4];
 if(idx1>=0)frr[0]=s[0][idx1];
if(idx2>=0) frr[1]=s[0][idx2];
 if(idx1>=0) frr[2]=s[1][idx1];
 if(idx2>=0) frr[3]=s[1][idx2];

  vector<string>v;

  for(int i=0;i<=1;i++)
  {
      for(int j=0;j<=4;j++)
      {
          string k=s[i],p=s[i];
        if(idx1>=0)  k[idx1]=frr[j];
        if(idx2>=0)  p[idx2]=frr[j];
          v.push_back(k);
          v.push_back(p);
      }
  }


  for(int i=0;i<v.size();i++)
  {
      int counter=0;
      bool br=true;
      string u=v[i];
      for(int j=0;j<k;j++)
      {
          counter=0;
          for(int c=0;c<n;c++)
          {
              if(s[j][c]!=u[c])counter++;
          }

          if(counter>=2)br=false;
      }
      if(br)
      {
          cout<<v[i]<<endl;
          return ;
      }
  }
  cout<<-1<<endl;


}

int main()
{
  int q;cin>>q;while(q--)solve();

  //  solve();
}

