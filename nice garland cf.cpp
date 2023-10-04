#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n;
string s;

int f(char a,char b,char c)
{
    int cnt = 0 ;
    for(int i=0;i<s.size();i++)
    {
        if(i%3==0&&s[i]!=a)cnt++;
        if(i%3==1&&s[i]!=b)cnt++;
        if(i%3==2&&s[i]!=c)cnt++;
    }
    return cnt;
}

void solve()
{
   // cout<<"yes"<<endl;
   cin>>n;
   cin>>s;

   char a1,b1,c1;
   int sum = 1e8+7;

   for(int i=0;i<3;i++)
   {
       for(int j=0;j<3;j++)
       {
           for(int k=0;k<3;k++)
           {
               if(i!=j&&i!=k&&j!=k)
               {
                   char a,b,c;
                   if(i==0)a='R';
                   if(i==1)a='G';
                   if(i==2)a='B';
                   if(j==0)b='R';
                   if(j==1)b='G';
                   if(j==2)b='B';
                   if(k==0)c='R';
                   if(k==1)c='G';
                   if(k==2)c='B';
                   int pk = f(a,b,c);
                   if(pk<sum)
                   {
                       sum = pk;
                       a1=a;
                       b1=b;
                       c1=c;
                   }
               }
           }
       }
   }
   cout<<sum<<endl;
   for(int i=0;i<s.size();i++)
   {
       if(i%3==0)cout<<a1;
       if(i%3==1)cout<<b1;
       if(i%3==2)cout<<c1;
   }

   cout<<endl;


}

int main()
{
  // int q;cin>>q;while(q--)solve();
   solve();
}

