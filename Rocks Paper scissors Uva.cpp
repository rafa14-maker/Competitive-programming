#include<bits/stdc++.h>
using namespace std;

int n,m;
char arr[105][105];
char frr[105][105];

char ch(char a,char b)
{
    if(a=='R')
    {
        if(b=='R'||b=='S')return a;
        else return b;
    }
     if(a=='S')
    {
        if(b=='P'||b=='S')return a;
        else return b;
    }
     if(a=='P')
    {
        if(b=='R'||b=='P')return a;
        else return b;
    }
}

void f()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)frr[i][j]=arr[i][j];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i+1<n)frr[i][j]=ch(arr[i][j],arr[i+1][j]);
            if(frr[i][j]!=arr[i][j])continue;
            if(i-1>=0)frr[i][j]=ch(arr[i][j],arr[i-1][j]);
             if(frr[i][j]!=arr[i][j])continue;
            if(j+1<n)frr[i][j]=ch(arr[i][j],arr[i][j+1]);
             if(frr[i][j]!=arr[i][j])continue;
            if(j-1>=0)frr[i][j]=ch(arr[i][j],arr[i][j-1]);
             if(frr[i][j]!=arr[i][j])continue;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)arr[i][j]=frr[i][j];
    }
}

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int k;
        cin>>n>>m>>k;
        for(int i=0;i<n;i++)
        {
            scanf("%s",arr[i]);
        }
       while(k--)f();
       for(int i=0;i<n;i++)cout<<arr[i]<<endl;
       if(q)printf("\n");
    }
}
