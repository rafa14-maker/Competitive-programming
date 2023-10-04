#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q=0;
    while(1)
    {
        int n,m;
        cin>>n>>m;
        if(n==0&&m==0)break;
        if(q)cout<<endl;
        char arr[n+5][m+5];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)cin>>arr[i][j];
        }
        int frr[n+5][m+5];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int counter=0;
                if(i+1<n)if(arr[i+1][j]=='*')counter++;
                if(j+1<m)if(arr[i][j+1]=='*')counter++;
                if(i+1<n&&j+1<m)if(arr[i+1][j+1]=='*')counter++;
                if(i-1>=0)if(arr[i-1][j]=='*')counter++;
                if(j-1>=0)if(arr[i][j-1]=='*')counter++;
                if(i-1>=0&&j-1>=0)if(arr[i-1][j-1]=='*')counter++;
                if(i+1<n&&j-1>=0)if(arr[i+1][j-1]=='*')counter++;
                if(i-1>=0&&j+1<m)if(arr[i-1][j+1]=='*')counter++;
               if(arr[i][j]!='*') frr[i][j]=counter;
               else frr[i][j]=-1;
            }
        }
        printf("Field #%d:\n",++q);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(frr[i][j]==-1)cout<<"*";
                else cout<<frr[i][j];
            }
            cout<<endl;
        }
     //   if(q)cout<<endl;
    }
}
