#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    char arr[n+5][n+5];
     char frr[m+5][m+5];

     for(int i=0;i<n;i++)
     {
         for(int j=0;j<n;j++)cin>>arr[i][j];
     }

     for(int i=0;i<m;i++)
     {
         for(int j=0;j<m;j++)cin>>frr[i][j];
     }

     for(int i=0;i<n;i++)
     {
         for(int j=0;j<n;j++)
         {
             if(i+m<n&&j+m<n)
             {
                 int flag=0;
                 for(int k=0,p=i;k<m;k++,p++)
                 {
                     for(int l=0,r=j;l<m;l++,r++)
                     {
                         if(frr[k][l]!=arr[p][r])
                         {
                             flag++;
                             break;
                         }
                     }
                 }
                  if(flag==0)
                 {
                     cout<<"Yes"<<endl;
                     return 0;
                 }

             }
         }
     }
     cout<<"No"<<endl;
}
