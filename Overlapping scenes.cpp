#include<bits/stdc++.h>
using namespace std;

string cal(string a,string b)
{
    for(int i=0;i<a.size();i++)
    {
        bool tr=true;
        int j=0;
      for( j=0;j<b.size()&&i+j<a.size();j++)
      {
          if(b[j]!=a[i+j])tr=false;
       //   if(b[j]==a[i+j])tr=true;
      }
      if(tr)
      {
          if(i+j<a.size())continue;
          for(int k=j;k<b.size();k++)
          {
              a+=b[k];
          }
          return a;
      }
    }
   for(int i=0;i<b.size();i++)a+=b[i];
   return a;
}

void solve(int test)
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)arr[i]=i;
    string frr[n+5];
    for(int i=0;i<n;i++)cin>>frr[i];
    int cnt=1e9;
    do
    {
        string s="";
      //  for(int i=0;i<n;i++)cout<<arr[i]<<" ";cout<<endl;
        for(int i=0;i<n;i++)
        {
            if(i==0)s=frr[arr[i]];
            else
            {
                s=cal(s,frr[arr[i]]);
               // if(s==krr)break;
                // else s=krr;
            }
        }
      //  cout<<s<<endl;
        int len=s.size();
        cnt=min(cnt,len);
    }while(next_permutation(arr,arr+n));
    printf("Case %d: ",test);
  cout<<cnt<<endl;
}

int main()
{
    int q;
    cin>>q;
    int test=0;
    while(q--)solve(++test);
}
