#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int n;
   cin>>n;
   int arr[n+5];
   bool tr=true;;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       if(i!=0&&arr[i-1]!=arr[i])tr=false;
   }
   if(tr)
   {
       cout<<"NO"<<endl;
       return ;
   }
   else
   {
        cout<<"YES"<<endl;
       for(int i=1;i<n;i++)
       {
         if(arr[i]!=arr[0])  cout<<"1"<<" "<<i+1<<endl;
       }
       int idx=-1;
       for(int i=0;i<n;i++)
       {
           if(arr[0]!=arr[i])
           {
               idx=i;
               break;
           }
       }
       for(int i=1;i<n;i++)
       {
           if(arr[0]==arr[i])
           {
               cout<<idx+1<<" "<<i+1<<endl;
           }
       }
   }
}

int main()
{
    int q;cin>>q;while(q--)solve();
   // solve();
}


