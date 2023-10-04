#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int arr[n+5];
        for(int i=0;i<n;i++)cin>>arr[i];
        int flag=0;

       for(int i=0;i<n-1;i++)
       {
           if(abs(arr[i]-arr[i+1])>k)
           {
               flag++;
               break;
           }
            else if(arr[i]+m<arr[i+1])
            {
            flag++;
               break;
            }
            else if(arr[i]+m==arr[i+1])m=0;
            else if(arr[i]+m>arr[i+1])
            {
                int p=arr[i]+m-arr[i+1];
                if(i+2<n)
                {
                    if(abs(arr[i+1]-arr[i+2])>k)
                    {

                    }
                }
            }
       }

        if(flag==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
