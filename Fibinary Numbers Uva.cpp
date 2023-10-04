#include<bits/stdc++.h>
using namespace std;

string a,b;
int arr[120];
bool fk=false;

void f()
{
   for(int i=1;i<=118;i++)arr[i]=0;
   int idx=118;
   for(int i=a.size()-1;i>=0;i--)
   {
       if(a[i]=='1')arr[idx]++;
       idx--;
   }
   idx=118;
   for(int i=b.size()-1;i>=0;i--)
   {
       if(b[i]=='1')arr[idx]++;
       idx--;
   }

   while(1){

        bool tr=true;

   for(int i=118;i>=1;i--)
   {
       if(i==118)
       {
           if(arr[i]>=2)
           {
               tr=false;
               int cnt = arr[i]/2;
               arr[i]-= 2*cnt;
               arr[117]+=cnt;
           }
       }
       else  if(i==117)
       {
           if(arr[i]>=2)
           {
               tr=false;
               int cnt = arr[i]/2;
               arr[i]-= 2*cnt;
               arr[116]+=cnt;
               arr[118]+=cnt;
           }
       }
       else
       {
           if(arr[i]>=2)
           {
               tr=false;
               int cnt = arr[i]/2;
               arr[i]-= 2*cnt;
               arr[i+2]+=cnt;
               arr[i-1]+=cnt;
           }
       }
   }

   if(tr)break;

   }


   while(1){
        bool tr=true;
   for(int i=1;i<=118;i++)
   {
       if(i+1<=118&&i+2<=118&&arr[i+1]==1&&arr[i+2]==1&&arr[i]==0)
       {
           tr=false;
           arr[i]=1;
           arr[i+1]=0;
           arr[i+2]=0;
       }
   }
   if(tr)break;
   }

}

void solve()
{
     if(!fk)fk=true;
    else cout<<"\n";
    f();
    bool tr=false;
    for(int i=1;i<=118;i++)
    {
        if(arr[i]==1)tr=true;
        if(tr)cout<<arr[i];
    }
    if(!tr)cout<<0;
    cout<<"\n";
}

int main()
{
    while(cin>>a>>b)
    {
        solve();
    }
}
