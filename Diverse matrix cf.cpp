#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   int a,b;
   cin>>a>>b;

   if(a==1&&b==1)
   {
       cout<<0<<endl;
       return ;
   }

   if(a==1||b==1)
   {
       int idx = 2;
       for(int i=1;i<=a;i++)
       {
           for(int j=1;j<=b;j++)
           {
               cout<<idx<<" ";
               idx++;
           }
           cout<<endl;
       }
       return ;
   }

   int arr[a+5][b+5]={0};
   int frr[a+5];
   int krr[b+5];
   int idx = 1;
   for(int i=1;i<=a;i++)
   {
       frr[i] = idx;
       idx++;
   }
   for(int i=1;i<=b;i++)
   {
       krr[i] = idx;
       idx++;
   }

  // cout<<idx<<endl;

   for(int i=1;i<=a;i++)
   {
       for(int j=1;j<=b;j++)
       {
           arr[i][j] = frr[i]*krr[j];
       }
   }

   for(int i=1;i<=a;i++)
   {
       for(int j=1;j<=b;j++)
       {
           cout<<arr[i][j]<<" ";
       }
       cout<<endl;
   }

}

int main()
{
    CherryFrog;
   // int q;cin>>q;while(q--)solve();
   solve();
}

