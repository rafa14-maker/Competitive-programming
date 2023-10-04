#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n,m;
       cin>>n>>m;
       m*=60;
       int a,b,c,d,e=n;
       char k;
       int sum=0;
       while(e--)
       {
           scanf("%d %c  %d %d %c %d",&a,&k,&b,&c,&k,&d);
           sum+=((c*60+d)-((a*60)+b));
       }
       if(sum>=m)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
   }
}
