#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,i,l=0,j;
    int arr[100][100];
    char k;
    cin>>a>>b;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            l++;
           cin>>k;
           if(k=='.')
           {
               if(l%2==0)
               {
                   arr[i][j]=2;
               }
               else
               {
                   arr[i][j]=1;
               }
           }
           else if(k=='-')
           {
               arr[i][j]=0;
           }
        } if(b%2==0)
        {
            l++;
        }
    }

    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(arr[i][j]==0)
            {
                cout<<"-";
            }
           else if(arr[i][j]==1)
            {
                cout<<"B";
            }
           else if(arr[i][j]==2)
           {
               cout<<"W";
           }
        }
        cout<<endl;
    }
}
