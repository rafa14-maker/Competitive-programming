#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    int sum=0;
    if(n>1)sum=1;
    int idx=arr[0];
    for(int i=1;i<n;i++)
    {
       if(sum%2)
       {
        if(arr[i]<idx)
        {
            sum++;
        }
       }
       else
       {
            if(arr[i]>idx)
        {
            sum++;
        }
       }
       idx=arr[i];
    }

   printf("%d\n",sum);
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
