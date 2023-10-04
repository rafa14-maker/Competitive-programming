#include<bits/stdc++.h>
using namespace std;

void solve()
{
   map<string,int>mp;
   int n,k;
   scanf("%d %d",&n,&k);
   string str;
   string pkr;
   long long mx = 2e15+7;
 //  cin>>s;

     mp.clear();
     char co = 'a'+k-1;
     str="";
     str +=co;
     long long sum=0;
   while(str.size()<n)
   {
       int len=str.size()-1;
       string a;
       a+=str[len];
       long long mn=2e15+7;
       string kp,pk;
       for(int i=0;i<k;i++)
       {
           char lp = 'a'+i;
           pk=a+lp;
           if(mp[pk]<mn)
           {
               mn=mp[pk];
               kp=pk;
           }
       }
       mp[kp]++;
       char ac = kp[kp.size()-1];
       sum+=mn;
       str+=ac;
   }
   if(mx>sum)
   {
       mx=sum;
       pkr=str;
   }

   cout<<str<<"\n";
}

int main()
{
    solve();
}
