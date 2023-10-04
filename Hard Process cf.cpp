#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n+5];
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
   // deque<int>dq;
   // deque<int>ans;

    int pk=0,kp=0,j=0,cnt=0;

   for(int i=0;i<n;i++)
   {
       if(j<i)
       {
           j=i;
           cnt=0;
       }
       while(j<n)
       {
           int ncnt = cnt+ !arr[j];
           if(ncnt>k)break;
           cnt += !arr[j];
           j++;
       }

       if(j-i>kp-pk)
       {
           kp=j;
           pk=i;
       }
       if(cnt>0)cnt-= !arr[i];
   }

    cout<<kp-pk<<endl;

    for(int i=pk;i<kp;i++)arr[i]=1;

    for(int i=0;i<n;i++)printf("%d ",arr[i]);
    printf("\n");
}

int main()
{
    solve();
}
