#include<bits/stdc++.h>
using namespace std;

int n,m,flag=1000000;

void f(int x,int y,int a,int b,int counter)
{
    if(x>n||y>m)
    {
        return;
    }
    else if(x<0||y<0)
    {
        return;
    }
    else if(x==n&&y==m)
    {
        flag=min(counter,flag);
    }
    f(x-a,y-b,a,b,counter+1);
    f(x+a,y-b,a,b,counter+1);
    f(x-a,y+b,a,b,counter+1);
    f(x+a,y+b,a,b,counter+1);
}

int main()
{
    int i,j,a,b;
    cin>>n>>m>>i>>j>>a>>b;
    f(i,j,a,b,0);
    cout<<flag<<endl;
}
