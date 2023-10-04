#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve()
{
   int n,k;
   cin>>n>>k;
   k++;
   char arr[n];bool tr=true;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       if(arr[i]=='1')tr=false;
   }
   int idx=0;
   for(int i=0;i<n;i++)
   {
       if(arr[i]=='1')
       {
           idx=k-1;
       }
       else if(arr[i]!='9')
       {
           if(idx>0)arr[i]='9',idx--;
       }
       else idx--;
   }
   idx=0;
  // for(int i=0;i<n;i++)cout<<arr[i];cout<<endl;


   for(int i=n-1;i>=0;i--)
   {
       if(arr[i]=='1')
       {
           idx=k-1;
       }
       else if(arr[i]!='9')
       {
           if(idx>0)arr[i]='9',idx--;
       }
       else idx--;
   }


 //  for(int i=0;i<n;i++)cout<<arr[i];cout<<endl;
  idx=0;
   long long counter=0;
   for(int i=0;i<n;i++)
   {
       if(arr[i]=='0')idx++;
       else
       {
               counter+=(idx/k);
               if(idx%k!=0)counter++;
               idx=0;
       }
       }
   if(idx<=k&&idx!=0)counter++;
           else if(idx!=0)
           {
               counter+=(idx/k);
               if(idx%k!=0)counter++;
           }
   cout<<counter<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();

   // solve();
}

