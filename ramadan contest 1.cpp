#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    char arr[n+5][m+5];

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
        int flag=0;
        for(int j=0;j<m;j++)
        {
           if(arr[i][j]=='S')
           {
               flag++;
               break;
           }
        }
        if(flag==0)
        {
             for(int j=0;j<m;j++)
        {
           if(arr[i][j]=='.')
           {
               counter++;
               arr[i][j]='0';
           }
        }
        }
    }

     for(int j=0;j<m;j++)
    {
        int flag=0;
        for(int i=0;i<n;i++)
        {
           if(arr[i][j]=='S')
           {
               flag++;
               break;
           }
        }
        if(flag==0)
        {
             for(int i=0;i<n;i++)
        {
           if(arr[i][j]=='.')
           {
               counter++;
               arr[i][j]='0';
           }
        }
        }
    }

    cout<<counter<<endl;


}
