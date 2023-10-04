#include<bits/stdc++.h>
using namespace std;

using ll=long long ;

int n,k;

void solve()
{
   string arr,frr;
   cin>>arr>>frr;
   long long cnt=0;
   for(int i=0;i<arr.size()-frr.size()+1;i++)
   {
       int kp=0;
       for(int j=0;j<frr.size();j++)
       {
           if(j+i<arr.size()&&frr[j]==arr[i+j])kp++;
       }
      if(kp==0)cnt++;
   }
   printf("%d\n",cnt);
}

int main()
{
 //   int q;scanf("%d",&q);while(q--)solve();
   solve();
}



