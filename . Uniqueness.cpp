#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int a=-1,b=-1,flag=0;
    for(int i=0;i<n;i++)
    {
        if(flag>0)break;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                a=i;
                flag++;
                break;
            }
        }
    }
    flag=0;
    for(int i=n-1;i>=0;i--)
    {
        if(flag!=0)break;
       for(int j=i-1;j>=0;j--)
       {
          if(arr[i]==arr[j])
          {
              b=i;
              flag++;
              break;
          }
       }
    }
    if(a==-1&&b==-1)cout<<0<<endl;
    else if(arr[a]==arr[b])
    {
        cout<<b-a<<endl;
    }
    else
    {
        cout<<(b-1)-(a+1)+1<<endl;
    }
}
