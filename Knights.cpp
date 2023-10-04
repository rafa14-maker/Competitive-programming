#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5][n+5];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i%2==0)
            {
                if(j%2==0)
                {
                    arr[i][j]=1;
                }
                else
                {
                    arr[i][j]=0;
                }
            }
            else
            {
                if(j%2==0)
                {
                    arr[i][j]=0;
                }
                else
                {
                    arr[i][j]=1;
                }
            }
        }


    }
     for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
               if(arr[i][j]==1) cout<<"W";
               else cout<<"B";
            }
            cout<<endl;
        }
}
