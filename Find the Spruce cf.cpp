#include<bits/stdc++.h>
using namespace std;
char arr[505][505];
char frr[505][505];

int n,m;

void f()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)frr[i][j]=arr[i][j];
    }
}

void solve()
{
  //  int n,m;
    cin>>n>>m;
   // char arr[n+5][m+5];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)cin>>arr[i][j],frr[i][j]=arr[i][j];
    }
    int cnt=0;
    for(int k=1;k<=2500;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                for(int p=0;p<k;p++)
                {
                    if(i-p<0||j-p<0||i+p>=n||j+p>=m)break;
                    bool tr=true;
                    for(int a=i-p;a<=i+p;a++)
                    {
                        for(int b=j-p;b<=j+p;b++)
                        {
                            if(frr[a][b]=='.')tr=false;
                        }
                    }
                    if(tr)
                    {
                        cnt++;
                         for(int a=i-p;a<=i+p;a++)
                        {
                        for(int b=j-p;b<=j+p;b++)
                        {
                            frr[a][b]='.';
                           }
                        }
                    }
                   // f();
                }
              //  f();
            }
        }
    }
    cout<<cnt<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
