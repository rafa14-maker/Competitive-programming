#include<bits/stdc++.h>
using namespace std;

int n;
int arr[3005];
int cnt=0;

void f(int left,int right)
{
    if(left==right)
    {
        return ;
    }

    if(arr[left]<arr[right])
    {
        arr[left+1]+=arr[left];
        cnt++;
        f(left+1,right);
    }
    else if(arr[left]>arr[right])
    {
        arr[right-1]+=arr[right];
        cnt++;
        f(left,right-1);
    }
    else if(arr[left]==arr[right])
    {
        bool tr=true;
        for(int i=left;i<right;i++)
        {
            if(arr[i]!=arr[i+1])tr=false;
        }
        if(tr)return ;
        cnt+=2;
      //  arr[left+1]+=arr[left];
        f(left+1,right-1);
    }
}

void solve()
{
   //int n;
   cin>>n;
   for(int i=0;i<n;i++)cin>>arr[i];
   cnt=0;
   f(0,n-1);
   cout<<cnt<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

