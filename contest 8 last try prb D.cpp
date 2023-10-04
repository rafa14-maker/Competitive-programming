#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,l,k,a,b;

    char p;

    cin>>n>>m;

    int arr[n][m];

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>p;
            if(p=='*')
            {
                arr[i][j]=0;
            }
            else
            {
                arr[i][j]=1;
            }
        }
    }


     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr[i][j]==0)
            {
                k=i;
                l=j;
                i=n;
                j=m;
            }
        }

    }
     for(i=n-1;i>=0;i--)
    {
        for(j=m-1;j>=0;j--)
        {
            if(arr[i][j]==0)
            {
                a=i;
                b=j;
                i=-1;
               j=-1;
            }
        }

    }

    for(i=k;i<=a;i++)
    {
        for(j=l;j<=b;j++)
        {
            if(arr[i][j]==0)
            {
                cout<<"*";
            }
            else
            {
                cout<<".";
            }

      }
      cout<<endl;
    }


}
