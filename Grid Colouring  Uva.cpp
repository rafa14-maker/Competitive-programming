#include<bits/stdc++.h>
using namespace std;

char arr[100][100];
bool vis[100][100];

void f(int i,int j,char c)
{
    if(vis[i][j])return ;
    if(arr[i][j]=='X')return ;
    vis[i][j]=true;
    arr[i][j]=c;
    f(i+1,j,c);
    f(i,j+1,c);
    f(i-1,j,c);
    f(i,j-1,c);
}

int main()
{
    while(1)
    {
        int n=0;
        while(1)
        {
            if(!gets(arr[n]))return 0;
            else if(arr[n][0]=='_')break;
            n++;
        }
        memset(vis,false,sizeof vis);
        for(int i=0;i<n;i++)
        {
            for(int j=0;arr[i][j];j++)
            {
                if(arr[i][j]!='X'&&arr[i][j]!=' '&&!vis[i][j])
                {
                    f(i,j,arr[i][j]);
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            puts(arr[i]);
        }
        puts("_____________________________");
    }
}
