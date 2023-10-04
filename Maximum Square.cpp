#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
       int arr[n+5];
       for(int i=0;i<n;i++)cin>>arr[i];
       int counter=0;
       for(int i=1;i<=1000;i++)
       {
           int flag=0;
           for(int j=0;j<n;j++)
           {
               if(arr[j]>=i)flag++;
               if(flag>=i)break;
           }
           if(flag>=i)counter=flag;
       }
       cout<<counter<<endl;
    }
}
