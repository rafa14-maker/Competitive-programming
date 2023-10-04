#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   cin>>s;
   int k;
   cin>>k;
   int arr[30];
   reverse(s.begin(),s.end());
   for(int i=0;i<s.size();i++)
   {
       int a=(s[i]-'0');
       arr[i]=a;
   }
   int b=1;
   int n=s.size();
   while(b<=n)
   {
       int sum=0,i;
      int vis[n]={0};
       for(i=0;i<n;i+=b)
       {

           int r=1,cr=0;
           for(int j=i;j<i+b&&j<n;j++)
           {
               vis[j]=1;
               cr+=(arr[j]*r);
               r*=10;
           }
           sum+=cr;
         //  cout<<b<<" "<<sum<<endl;

       }
       for(int i=0;i<n;i++)
       {
           if(vis[i]!=1)
           {
            int r=1,cr=0;
           for(int j=i;j<n;j++)
           {
               cr+=(arr[j]*r);
               r*=10;
           }
           sum+=cr;
           cout<<sum<<endl;
           break;
           //sum+=cr;
         //  cout<<b<<" "<<sum<<endl;
           }
       }


       if(sum==k)
       {
          cout<<1;
          for(int i=0;i<b;i++)cout<<0;
           return 0;
       }
      // cout<<sum<<endl;
       b++;
   }
   cout<<-1<<endl;
}
