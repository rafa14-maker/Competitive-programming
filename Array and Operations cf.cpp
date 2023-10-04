#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   int n,k;
   cin>>n>>k;
   int arr[n+5];
   for(int i=0;i<n;i++)cin>>arr[i];
   for(int i=0;i<k;i++)
   {
       int mx = 0;
       int idx = 0,pdx =0;
       bool tr = true;
       for(int i=0;i<n;i++)
       {
           if(arr[i]==0)continue;
           for(int j=0;j<n;j++)
           {
               if(i==j)continue;
               if(arr[j]==0)continue;
               int k ;
               if(arr[i]==arr[j])k = arr[i]+arr[j]-1;
               else k = arr[i]+arr[j];
               if(k>mx)
               {
                //   cout << idx <<" "<< pdx << endl;
                   idx = i;
                   pdx = j;
                   mx = k;
                   if(arr[i]==arr[j])tr=true;
                   else tr = false;
               }
           }
       }
        cout << idx <<" "<< pdx << endl;
     if(tr){  arr[idx] = 1;
       arr[pdx] = 0;}
       else
       {
            arr[idx] = 0;
       arr[pdx] = 0;
       }
   }

   int sum = 0 ;

    for(int i=0;i<n;i++)cout << arr[i] <<" ";cout << endl;

   for(int i=0;i<n;i++)sum+=arr[i];

   cout << sum << endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}
/*

1
9 2
1 10 10 1 10 2 7 10 3

*/

