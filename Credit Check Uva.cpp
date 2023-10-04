#include<bits/stdc++.h>
using namespace std;

void solve()
{
  string s;
  getline(cin,s);
  int arr[]={0,2,5,7,10,12,15,17};
  int frr[]={1,3,6,8,11,13,16,18} ;
  long long sum=0;
  for(int i=0;i<8;i++)
  {
      int a=(int)(s[arr[i]]-'0');
      a=a*2;
      if(a>=10)
      {
          sum+=a%10;
          a/=10;
          sum+=a;
      }
      else sum+=a;
  }
   for(int i=0;i<8;i++)
  {
      int a=(int)(s[frr[i]]-'0');
     sum+=a;
  }

  if(sum%10==0)cout<<"Valid"<<endl;
  else cout<<"Invalid"<<endl;

}

int main()
{
    int q;
    cin>>q;
    cin.ignore();
    while(q--)solve();
}
