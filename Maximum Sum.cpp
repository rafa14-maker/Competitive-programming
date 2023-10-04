#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5][n+5];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>arr[i][j];
            if(i>1)arr[i][j]+=arr[i-1][j];
            if(j>1)arr[i][j]+=arr[i][j-1];
            if(i>1&&j>1)arr[i][j]-=arr[i-1][j-1];
        }
    }

    int counter=-1e7;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            for(int k=i;k<=n;k++)
            {
                for(int l=j;l<=n;l++)
                {
                    int sub=arr[k][l];
                    if(i>1)sub-=arr[i-1][l];
                     if(j>1)sub-=arr[k][j-1];
                      if(i>1&&j>1)sub+=arr[i-1][j-1];
                      counter=max(counter,sub);
                }
            }
        }
    }
    cout<<counter<<endl;

}
