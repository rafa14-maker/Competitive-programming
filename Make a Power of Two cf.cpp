#include<bits/stdc++.h>
using namespace std;

vector<string>vs;
vector<string>v;
string frr;

void f(int pos,string s)
{
    if(pos==frr.size())
    {
        v.push_back(s);
        return ;
    }
    f(pos+1,s+frr[pos]);
    f(pos+1,s);
}

void p()
{
   for(int i=0;i<40;i++)
   {
       long long k = pow(2,i);
      string s;
      while(k>0)
      {
          int r = k%10;
          k/=10;
          s+=(char)('0'+r);
      }
      reverse(s.begin(),s.end());
      vs.push_back(s);
   }
}

bool sub(string str1,string str2)
{
    int j = 0;
    int n=str1.size();
    int m=str2.size();
    for (int i = 0; i < n && j < m; i++)
        if (str1[j] == str2[i])
            j++;
    return (j == m);
}




void solve()
{
  cin>>frr;
  v.clear();
  f(0,"");
  int mn = 1e8+7;
  for(int i=0;i<v.size();i++)
  {
      for(int j=0;j<vs.size();j++)
      {
          if( check_subsequence(vs[j],v[i]))
          {
            //  cout<<vs[j]<<" "<<v[i]<<endl;
              int a=frr.size();
              int b = vs[j].size();
              int c = v[i].size();
              int k = abs(a-c)+abs(b-c);
              mn=min(k,mn);
          }
      }
  }
  cout<<mn<<endl;
}

int main()
{
    p();

   // for(int i=0;i<20;i++)cout<<vs[i]<<endl;

    int q;
    cin>>q;
    while(q--)solve();
}

