#include<bits/stdc++.h>
using namespace std;

int n,m,p,t;
char arr[25][25];

bool flag;

int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            for(int a=i;a<n;a++)
            {
                for(int b=j;b<m;b++)
                {
                    t=(a+b-i-j+2)*2;
                    if(t<=p)continue;
                    flag=0;
                    for(int i1=i;i1<=a;i1++)
                    {
                        for(int j1=j;j1<=b;j1++)
                        {
                            if(arr[i1][j1]=='1')
                            {
                                flag=1;
                            }
                        }
                        if(flag)break;
                    }
                    if(!flag)p=t;
                }
            }
        }
    }
    cout<<p<<endl;
}
