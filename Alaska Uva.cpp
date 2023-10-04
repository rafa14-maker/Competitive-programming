#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        int n;
        cin>>n;
        if(n==0)break;
        int arr[n+5];
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(arr,arr+n);
        int flag=0,sum=0;
        for(int i=1;i<n;i++)
        {
            if(i==0&&arr[i]>200)flag++;
            if(abs(arr[i]-arr[i-1])>200)flag++;
        }
        if(((1422-arr[n-1])*2)>200)flag++;
       if(flag>0)cout<<"IMPOSSIBLE"<<endl;
       else cout<<"POSSIBLE"<<endl;

    }
}
