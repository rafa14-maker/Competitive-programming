#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    for(int p=1;p<=q;p++)
    {
        int n;
        cin>>n;
        int arr[n][3];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>arr[i][j];
            }
        }
         for(int i=1;i<n;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(j==0)
                {
                    arr[i][j]=min(arr[i][j]+arr[i-1][j+1],arr[i][j]+arr[i-1][j+2]);
                }
                else  if(j==1)
                {
                    arr[i][j]=min(arr[i][j]+arr[i-1][j-1],arr[i][j]+arr[i-1][j+1]);
                }
                else  if(j==2)
                {
                    arr[i][j]=min(arr[i][j]+arr[i-1][j-1],arr[i][j]+arr[i-1][j-2]);
                }
            }
        }
        int m=min(arr[n-1][0],arr[n-1][1]);
        m=min(arr[n-1][2],m);
       printf("Case %d: %d\n",p,m);
    }
}
