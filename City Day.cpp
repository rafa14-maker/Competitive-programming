#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    int arr[n+5];

    for(int i=0;i<n;i++)cin>>arr[i];

    for(int i=0;i<n;i++)
    {
        int flag=0,a=x,b=1;

        for(int j=i-1;j>=0,a>0;j--,a--)
        {
            if(j>=0&&arr[i]>arr[j])
            {
                flag++;
                break;
            }
        }

         for(int j=i+1;j<n,b<=y;j++,b++)
        {
            if(j<n&&arr[i]>arr[j])
            {
                flag++;
                break;
            }
        }
      //  cout<<arr[i]<<" "<<flag<<endl;
        if(flag==0)
        {
            cout<<i+1<<endl;
            return 0;
        }
    }
}
