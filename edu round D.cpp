#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
  int len=s.size();
  int arr[len+5]={0};
  for(int i=0;i<len;i++)arr[i]=1;
  arr[0]=1;
  for(int i=1;i<s.size();i++)
  {
    if(s[i-1]==s[i])
    {
        arr[i]=arr[i-1]+1;
    }
  }
  vector<int>v;
 int  idx=1;
  for(int i=0;i<len;i++)
  {
      if(i+1<len&&arr[i]==arr[i+1]-1)
      {
          idx=arr[i+1];
      }
      else
      {
          v.push_back(idx);
         idx=1;
      }
  }
      int cnt=0;
      int l=0,r=v.size()-1;
      while(l<r)
      {
          v[l]=0;
          l++;
          cnt++;
          while(v[r]==1)
          {
              r--;
          }
         if(r>l) v[r]--;
         else break;

      }
      int pk=0,ck=0;
      for(int i=0;i<v.size();i++)
      {
          if(v[i]>1)pk+=2;
          else if(v[i]==1)
          {
              ck+=1;
          }
      }
      cout<<cnt+(ck/2)+pk<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
   // solve();
}



