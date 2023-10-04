#include<bits/stdc++.h>
using namespace std;

int n,x[300],y[300];
int m;

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)cin>>x[i]>>y[i];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int l=0,r=0;
            for(int k=0;k<n;k++)
            {
               int area=(x[j]-x[i])*(y[k]-y[j])-(y[j]-y[i])*(x[k]-x[j]);
				l=min(l,area);
				r=max(r,area);
            }
            if(l<0&&r>0)
            {
                m=max(m,r-l);
            }
        }
    }

    printf("%lf\n",m/2.0);
}
