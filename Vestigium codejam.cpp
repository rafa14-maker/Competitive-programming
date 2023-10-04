#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    int counter=0;
    while(q--)
    {
        int n;
        cin>>n;
        int arr[n+5][n+5];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)cin>>arr[i][j];
        }
        int trac=0;
        for(int i=0,j=0;i<n,j<n;i++,j++)trac+=arr[i][j];

        int rol=0,col=0;

        for(int i=0;i<n;i++)
        {
            int flag=0;
            for(int j=0;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if(arr[i][j]==arr[i][k])
                    {
                        flag++;
                        break;
                    }
                }
            }
            if(flag>0)rol++;
        }

        for(int j=0;j<n;j++)
        {
            int flag=0;
            for(int i=0;i<n;i++)
            {
                for(int k=i+1;k<n;k++)
                {
                    if(arr[i][j]==arr[k][j])
                    {
                        flag++;
                        break;
                    }
                }
            }
            if(flag>0)col++;
        }

        printf("Case #%d: %d %d %d\n",++counter,trac,rol,col);
    }
}
