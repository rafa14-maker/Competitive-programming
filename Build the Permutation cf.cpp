#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
const int N = 1e5+5;

int n,ak,bk;
int arr[N];

bool fun1()
{
    int a1 = ak,b1=bk;
    int a = ak,b = bk;
     for(int i=1;i<=n;i++)arr[i] = 0;
      int idx = n;
       int k = a;
       for(int i=2;i<=n;i+=2)
       {
           if(k>0)
           {
               arr[i] = idx;
               idx--;
               k--;
           }
       }
       int pdx = 1;
       k=b;
       for(int i=3;i<=n;i+=2)
       {
           if(k>0)
           {
               arr[i] = pdx;
               pdx++;
               k--;
           }
       }
       if(idx+1<pdx-1)
       {
          // cout<< -1 <<endl;
           return false;
       }
       for(int i=1;i<=n;i++)
       {
           if(arr[i]==0)arr[i] = idx,idx--;
       }

        int a2 = 0,b2 =0;

   for(int i=2;i<n;i++)
   {
       if(arr[i]>arr[i+1]&&arr[i]>arr[i-1])a2++;
       if(arr[i]<arr[i+1]&&arr[i]<arr[i-1])b2++;
   }

   if(a2!=a1||b2!=b1)
   {
    //  cout<<-1<<endl;
       return false;
   }

   for(int i=1;i<=n;i++)cout<<arr[i]<<" ";cout<<endl;
       return true;
}

bool fun2()
{
      int a1 = ak,b1=bk;
    int a = ak,b = bk;
     for(int i=1;i<=n;i++)arr[i] = 0;
       int idx = 1;
       int k = b;
       for(int i=2;i<=n;i+=2)
       {
           if(k>0)
           {
               arr[i] = idx;
               idx++;
               k--;
           }
       }
       int pdx = n;
       k=a;
       for(int i=3;i<=n;i+=2)
       {
           if(k>0)
           {
               arr[i] = pdx;
               pdx--;
               k--;
           }
       }
       if(idx+1<pdx-1)
       {
          // cout<< -1 <<endl;
           return false;
       }
       for(int i=1;i<=n;i++)
       {
           if(arr[i]==0)arr[i] = idx,idx++;
       }
       int a2 = 0,b2 =0;

   for(int i=2;i<n;i++)
   {
       if(arr[i]>arr[i+1]&&arr[i]>arr[i-1])a2++;
       if(arr[i]<arr[i+1]&&arr[i]<arr[i-1])b2++;
   }

   if(a2!=a1||b2!=b1)
   {
     //  cout<<-1<<endl;
       return false;
   }

   for(int i=1;i<=n;i++)cout<<arr[i]<<" ";cout<<endl;

   return true;
}

void solve()
{
   // cout<<"yes"<<endl;
 //  int n,a,b;
   cin>>n>>ak>>bk;
  // int arr[n+5];
   for(int i=1;i<=n;i++)arr[i] = 0;
 /*  if(a>=b)
   {
       int idx = n;
       int k = a;
       for(int i=2;i<=n;i+=2)
       {
           if(k>0)
           {
               arr[i] = idx;
               idx--;
               k--;
           }
       }
       int pdx = 1;
       k=b;
       for(int i=3;i<=n;i+=2)
       {
           if(k>0)
           {
               arr[i] = pdx;
               pdx++;
               k--;
           }
       }
       if(idx+1<pdx-1)
       {
           cout<< -1 <<endl;
           return ;
       }
       for(int i=1;i<=n;i++)
       {
           if(arr[i]==0)arr[i] = idx,idx--;
       }
   }
   else
   {
       int idx = 1;
       int k = b;
       for(int i=2;i<=n;i+=2)
       {
           if(k>0)
           {
               arr[i] = idx;
               idx++;
               k--;
           }
       }
       int pdx = n;
       k=a;
       for(int i=3;i<=n;i+=2)
       {
           if(k>0)
           {
               arr[i] = pdx;
               pdx--;
               k--;
           }
       }
       if(idx+1<pdx-1)
       {
           cout<< -1 <<endl;
           return ;
       }
       for(int i=1;i<=n;i++)
       {
           if(arr[i]==0)arr[i] = idx,idx++;
       }
   }

   int a2 = 0,b2 =0;

   for(int i=2;i<n;i++)
   {
       if(arr[i]>arr[i+1]&&arr[i]>arr[i-1])a2++;
       if(arr[i]<arr[i+1]&&arr[i]<arr[i-1])b2++;
   }

   if(a2!=a1||b2!=b1)
   {
       cout<<-1<<endl;
       return ;
   }

   for(int i=1;i<=n;i++)cout<<arr[i]<<" ";cout<<endl;
   */

   if(fun1())return ;
   else if(fun2())return ;
   else cout << -1 << endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

