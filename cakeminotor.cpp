#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    char arr[n+1][m+1];
    int frr[n+1][m+1];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            frr[i][j]=0;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    int counter=0;

    for(int i=0;i<n;i++)
    {
        int found=0,ct=0;
        for(int j=0;j<m;j++)
        {

            if(arr[i][j]=='S')
            {
                found++;

                for(int k=j-1;k>=0;k--)
                {
                    frr[i][k]=0;
                }

                break;
            }
               if(frr[i][j]==0)
            {
                ct++;
                frr[i][j]=1;
            }
        }
        if(found==0)
        {
            counter+=ct;
        }
    }
     for(int j=0;j<m;j++)
    {
        int found=0,ct=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i][j]=='S')
            {
                found++;


                break;
            }
            if(frr[i][j]==0)
            {
                ct++;
                frr[i][j]=1;
            }
        }
        if(found==0)
        {
            counter+=ct;
        }
    }



    cout<<counter<<endl;
}
