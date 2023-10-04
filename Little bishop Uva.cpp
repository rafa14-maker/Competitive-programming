#include<bits/stdc++.h>
using namespace std;

int n,k;
int arr[10];
int cnt;

bool check(int r,int c)
{
    for(int j=1;j<=c;j++)
    {
        if(arr[j]==-1)continue;
        if(arr[j]!=r&&c!=j&&abs(arr[j]-r)==abs(c-j))return false;
    }
    return true;
}

void f(int idx,int ct)
{
   if(idx>n)
   {
     if(ct==k){cnt++;
      for(int i=1;i<=n;i++)cout<<arr[i]<<" ";cout<<endl;
     }
     return ;
   }
   if(ct>k)return ;

   f(idx+1,ct);

    for(int i=1;i<=n;i++)
    {
       if( check(i,idx))
        {
            arr[idx]=i;
         f(idx+1,ct+1);
        }
    }
}

void solve()
{
    memset(arr,0,sizeof arr);
    cnt=0;
    f(1,0);
    cout<<cnt<<endl;
}

int main()
{
   while(1)
   {
       cin>>n>>k;
       if(n==0&&k==0)break;
       solve();
   }
}
