#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int n=s.size();
    int kp=1e9;
      for(int i=0;i<=pow(2,n);i++)
    {
        vector<char>v;
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
                v.push_back(s[j]);
            }
        }
        int sum=0;
        for(int i=0;i<v.size();i++)
        {
           int k=(v[i]-'0');
           sum+=k;
        }
      if(sum%3==0&&sum!=0)
      {
          int len=v.size();
          kp=min(kp,n-len);
      }

    }
   if(kp!=1e9) cout<<kp<<endl;
   else cout<<-1<<endl;
}

int main()
{
    solve();
}
