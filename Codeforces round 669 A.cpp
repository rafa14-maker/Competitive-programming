#include<bits/stdc++.h>
using namespace std;

int n;
int arr[1005];


void solve()
{
   cin>>n;
   int idx=0,op=0;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
     if(idx%2==0)  op+=arr[i];
      else op-=arr[i];
      idx++;
   }
   if(op==0)
   {
       cout<<n<<endl;
       for(int i=0;i<n;i++)cout<<arr[i]<<" ";
       cout<<endl;
       return ;
   }
   int zero=0,one=0;
   for(int i=0;i<n;i++)
   {
       if(arr[i]==1)one++;
       else zero++;
   }
   if(one%2==0&&one>=n/2)
   {
       cout<<one<<endl;
       for(int i=0;i<n;i++)
       {
           if(arr[i]==1)cout<<arr[i]<<" ";
       }
       cout<<endl;
       return ;
   }
   else  if(zero%2==0&&zero>=n/2)
   {
       cout<<zero<<endl;
       for(int i=0;i<n;i++)
       {
           if(arr[i]==0)cout<<arr[i]<<" ";
       }
       cout<<endl;
       return;
   }

   for(int i=0;i<n;i++)
   {
       int sum=0,cnt=0;
       for(int j=0;j<n;j++)
       {
           if(j!=i)
           {
               if(cnt%2==0)sum+=arr[j];
               else sum-=arr[j];

               cnt++;
           }
       }
       if(sum==0)
       {
           cout<<n-1<<endl;
           for(int j=0;j<n;j++)
           {
               if(i!=j)
                cout<<arr[j]<<" ";
           }
           cout<<endl;
           break;
       }
   }

}

int main()
{
    int q;cin>>q;while(q--)solve();
   // solve();
}
