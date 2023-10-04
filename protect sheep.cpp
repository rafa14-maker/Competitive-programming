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
            if(arr[i][j]=='.')arr[i][j]='D';
        }
    }
    int flag=0;

      for(int i=0;i<n;i++)
    {
        if(flag>0)break;
        for(int j=0;j<m;j++)
        {
           if(arr[i][j]=='S')
           {
               if(i+1<n&&arr[i+1][j]=='W')flag++;
                if(j+1<m&&arr[i][j+1]=='W')flag++;
                 if(i-1>-1&&arr[i-1][j]=='W')flag++;
                  if(j-1>-1&&arr[i][j-1]=='W')flag++;
           }
           if(flag>0)break;
        }
    }
    if(flag>0)
    {
        cout<<"No"<<endl;
    }
    else
    {
        cout<<"Yes"<<endl;
         for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
          cout<<arr[i][j];
        }
        cout<<endl;
    }
    }

}
