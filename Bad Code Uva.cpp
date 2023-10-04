#include<bits/stdc++.h>
using namespace std;

int n;
map<char,string>mp;
set<string>vs;


void f(string code)
{
  //  cout<<code<<endl;
    if(vs.size()==100)return;

    bool tr=true;

    for(int i=0;i<code.size();i++)
    {
        if(code[i]>='1'&&code[i]<='9')tr=false;
    }

    if(tr)
    {
        string sk;
        for(int i=0;i<code.size();i++)if(code[i]!='0')sk+=code[i];
        vs.insert(sk);
        return;
    }

      for(int i=0;i<code.size();i++)
      {
          for(int j=i;j<code.size();j++)
          {
              string sk;
              for(int a=i;a<=j;a++)sk+=code[a];

              for(char kp='a';kp<='z';kp++)
              {
                  if(mp[kp]==sk)
                  {
                      string tk;
                      for(int a=0;a<i;a++)tk+=code[a];
                      tk+=kp;
                      for(int a=j+1;a<code.size();a++)tk+=code[a];
                      f(tk);
                  }
              }
          }
      }

}

void solve(int test)
{
    mp.clear();
    vs.clear();
    for(int i=0;i<n;i++)
    {
        char c;
        cin>>c;
        string sk;
        cin>>sk;
        mp[c]=sk;
    }
    string s;
    cin>>s;
    f(s);
    printf("Case #%d\n",test);
    for(auto it=vs.begin();it!=vs.end();it++)cout<<*it<<endl;
    cout<<endl;
}

int main()
{
    int test=0;
    while(1)
    {
        cin>>n;
        if(n==0)break;
        solve(++test);
    }
}
