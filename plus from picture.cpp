#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,flag=0,num=0;
    cin>>n>>m;
    char arr[n+5][m+5];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
        for(int i=0;i<n;i++)
    {
        if(flag==1)break;
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]=='*'&&i+1<n&&i-1>=0&&j-1>=0&&j+1<m&&arr[i-1][j]=='*'&&arr[i+1][j]=='*'&&arr[i][j+1]=='*'&&arr[i][j-1]=='*')
            {
                num++;
              //  arr[i-1][j]=='*'&&arr[i+1][j]=='*'&&arr[i][j+1]=='*'&&arr[i][j-1]=='*';
                int k=i,l=j,a=i,b=j;
                arr[i][j]='.';
                while(k-1>=0&&arr[k-1][j]=='*')
                {
                    arr[k-1][j]='.';
                    k--;
                }
                 while(l-1>=0&&arr[i][l-1]=='*')
                {
                    arr[i][l-1]='.';
                    l--;
                }
                while(a+1<n&&arr[a+1][j]=='*')
                {
                    arr[a+1][j]='.';
                    a++;
                }
                 while(b+1<m&&arr[i][b+1]=='*')
                {
                    arr[i][b+1]='.';
                    b++;
                }
                flag++;
                break;
            }
        }
    }
    if(num==0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
             // cout<<arr[i][j]<<" ";
             if(arr[i][j]=='*')
             {
                 cout<<"NO"<<endl;
                 return 0;
             }
        }
    }
    cout<<"YES"<<endl;
}
