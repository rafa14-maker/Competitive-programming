#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x=-10000,y=-10000,z;
    for(int i=-100;i<=100;i++)
    {
        for(int j=-100;j<=100;j++)
        {
            for(int k=-100;k<=100;k++)
            {
                if(i==j||j==k||k==i)continue;
                int p1=i+j+k;
                int p2=i*j*k;
                int p3=(i*i)+(j*j)+(k*k);
                if(p1==a&&p2==b&&p3==c)
                {
                   if(x==-10000||i<x)
                   {
                       x=i;
                       y=j;
                       z=k;
                   }
                   else if(i==x)
                   {
                    if(y>j)
                    {
                        y=j;
                        z=k;
                    }
                   }
                }
            }
        }
    }
    if(x!=-10000)cout<<x<<" "<<y<<" "<<z<<endl;
   else cout<<"No solution."<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
