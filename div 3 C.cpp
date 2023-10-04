#include<bits/stdc++.h>
using namespace std;
using ll =long long;


void solve()
{
   int n;
   cin>>n;

   int frr[100];
   for(int i=0;i<100;i++)frr[i]=0;

   for(int i=0;i<n;i++)
   {
       int a;
       cin>>a;
       frr[a]++;
   }

   int krr[500];
   for(int i=0;i<500;i++)krr[i]=0;

   int cnt=0;

   //for(int i=1;i<=10;i++)cout<<frr[i]<<endl;

   for(int i=0;i<100;i++)
   {
       for(int j=i;j<100;j++)
       {
           if(frr[i]==0||frr[j]==0)continue;

           if(i!=j){
           int a=frr[i];
           int b=frr[j];
           int k=min(a,b);
           krr[i+j]+=k;
           }
           else if(i==j)
           {
            int a=frr[i];
           int b=frr[j];
           int k=min(a,b);
          // if(k==1)continue;
           k/=2;
           krr[i+j]+=k;
           }
       }
   }
  // for(int i=1;i<=10;i++)cout<<krr[i]<<endl;
   for(int i=0;i<500;i++)cnt=max(cnt,krr[i]);
cout<<cnt<<endl;

}

int main()
{
    int q;cin>>q;while(q--)solve();

  //  solve();
}

