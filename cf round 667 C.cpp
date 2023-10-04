#include<bits/stdc++.h>
using namespace std;

void solve()
{
   long long n,a,b;
   cin>>n>>a>>b;
   long long c=b-a;
   long long cnt=c;
   vector<long long>v;
   for(long long i=2;i*i<=c;i++)
   {
       if(c%i==0)
       {
           if(c/i<n)
           {
               cnt=min(cnt,i);
           }
           if(c/i!=i&&c/(c/i)<n)
           {
               cnt=min(cnt,c/i);
           }
       }
   }
   int kp=c/cnt;

   for(int i=0;i<=kp;i++)
   {
    if(i==0)   v.push_back(a);
    else v.push_back(v[i-1]+cnt);
   }
 //  cout<<kp<<endl;
  // for(int i=0;i<v.size();i++)cout<<v[i]<<endl;

   int pk=v[0];
   int len=v.size()-1;
   int mk=v[len];


   while(pk>0&&n-v.size()>0)
   {
       pk-=cnt;
       if(pk<=0)break;
       v.push_back(pk);
   }

   //int len=v.size()-1;
   //pk=v[len];

   while(mk<=1e9&&n-v.size()>0)
   {
       mk+=cnt;
       v.push_back(mk);
   }

   for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
   cout<<endl;

}


int main()
{
    int q;cin>>q;while(q--)solve();
  //  solve();
}

