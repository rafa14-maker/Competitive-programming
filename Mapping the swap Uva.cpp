#include<bits/stdc++.h>
using namespace std;

int n;
int arr[10];
int mx;
map<int,int>mp;


bool check(int frr[10])
{
   for(int i=0;i<n-1;i++)
   {
       if(frr[i]>frr[i+1])
       {
           return false;
       }
   }
   return true;
}

void f(int frr[10],int cnt)
{
    if(check(frr))
    {
        if(mx==-1)mx=cnt,mp[mx]++;
        else
        {
            mx=min(mx,cnt);
            mp[mx]++;
        }
    }
    if(mx!=-1&&cnt>mx)return;

    for(int i=0;i<n-1;i++)
    {
        if(frr[i]>frr[i+1]){
        swap(frr[i],frr[i+1]);
        f(frr,cnt+1);
        swap(frr[i],frr[i+1]);
        }
    }
}

void solve(int test)
{
    mp.clear();
    for(int i=0;i<n;i++)cin>>arr[i];
    mx= -1;
    f(arr,0);
    if(mx==0)printf("There are 0 swap maps for input data set %d.\n",test);
     else printf("There are %d swap maps for input data set %d.\n",mp[mx],test);
}

int main()
{
    int test=0;
    while(1)
    {
        cin>>n;
        if(n==0)break;
        solve(++test);
    }
}
