#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    char arr[n+5][m+5];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int frr[n+5][m+5]={0};

    for(int j=1;j<=m;j++)
    {
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            if(arr[i][j]=='#')
            {
                sum=0;
                frr[i][j]=0;
            }
            else
            {
                sum++;
                frr[i][j]=sum;
            }
        }
    }

    for(int j=1;j<=m;j++)
    {
      //  int sum=0;
        for(int i=n;i>=1;i--)
        {
            if(i+1<=n&&frr[i][j]!=0&&frr[i+1][j]!=0)
            {
                frr[i][j]=frr[i+1][j];
            }
        }
    }
   int krr[n+5][m+5]={0};

     for(int i=1;i<=n;i++)
    {
        int sum=0;
        for(int j=1;j<=m;j++)
        {
            if(arr[i][j]=='#')
            {
                sum=0;
                krr[i][j]=0;
            }
            else
            {
                sum++;
                krr[i][j]=sum;
            }
        }
    }

    for(int i=1;i<=n;i++)
    {
      //  int sum=0;
        for(int j=m;j>=1;j--)
        {
            if(j+1<=m&&krr[i][j]!=0&&krr[i][j+1]!=0)
            {
                krr[i][j]=krr[i][j+1];
            }
        }
    }



   int counter=0;

   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=m;j++)
       {
           counter=max(counter,frr[i][j]+krr[i][j]);
       }
   }
cout<<counter-1<<endl;
}
