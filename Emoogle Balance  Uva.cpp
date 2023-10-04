#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p=0;
    while(1)
    {
        int n;
        cin>>n;
        if(n==0)break;
        int arr[n+5];
        for(int i=0;i<n;i++)cin>>arr[i];
        int flag=0,counter=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)flag++;
            else counter++;
        }
      printf("Case %d: %d\n",++p,flag-counter);
    }

}
