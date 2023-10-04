#include<bits/stdc++.h>
using namespace std;

int frr[20];
int arr[20],prr[20];
string s;
string fk,kf;


void solve()
{
  cin>>s;
  for(int i=1;i<=9;i++)
  {
      cin>>frr[i];
      arr[i]=frr[i];
      prr[i]=frr[i];
  }

  string kp,pk,sk;

  sk=s;

  for(int i=0;i<sk.size();i++)
  {
      int kp=(int)s[i]-'0';
      if(arr[kp]>0)
      {
          arr[kp]--;
          sk[i]='0';
      }
  }

  for(int i=0;i<sk.size();i++)
  {
      if(sk[i]!='0')kp+=sk[i];
  }

  sk=s;

  for(int i=sk.size()-1;i>=0;i--)
  {
      int kp=(int)s[i]-'0';
      if(frr[kp]>0)
      {
          frr[kp]--;
          sk[i]='0';
      }
  }

  for(int i=0;i<sk.size();i++)
  {
      if(sk[i]!='0')pk+=sk[i];
  }

cout<<max(kp,pk)<<endl;
}

int main()
{
    solve();
}
