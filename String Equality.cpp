#include<bits/stdc++.h>
using namespace std;

void solve()
{
   /* int n,k;
    cin>>n>>k;
    string s,f;
    cin>>s>>f;
  map<char,int>mp;
  bool tr=true;
  for(int i=0;i<f.size();i++)mp[f[i]]++;
  for(int i=0;i<s.size();i++)
  {
          bool kp=true;
          for(char a=s[i];a<='z';a++)
          {
              if(mp[a]>0)
              {
                  kp=false;
                  mp[a]--;
                  break;
              }
          }
          if(kp)tr=false;
  }
    if(tr)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;*/


        long long n,k;
    cin>>n>>k;
    long long f=n*n;
    int counter=1;

     long long idx1=0,idx2=0;

     while(idx1*idx1+idx2*idx2<=f)
     {
         if(counter%2==1)
         {
             long long p=idx1+k;
             if(p*p+idx2*idx2<=f)
             {
                 idx1=p;
             }
             else
             {
                 break;
             }
         }
         else if(counter%2==0)
         {
              long long p=idx2+k;
             if(p*p+idx1*idx1<=f)
             {
                 idx2=p;
             }
             else
             {
                 break;
             }
         }
         counter++;
     }

    if(counter%2==1)cout<<"Utkarsh"<<endl;
    else cout<<"Ashish"<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
