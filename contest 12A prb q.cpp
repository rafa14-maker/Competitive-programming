#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ax,ay,bx,by,cx,cy,dx,dy,i,n,r;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>ax>>ay>>bx>>by>>cx>>cy;

        dx=cx-bx+ax;
        dy=cy-by+ay;

        r=((ax*by)+(bx*cy)+(cx*dy)+(dx*ay))-((ay*bx)+(by*cx)+(cy*dx)+(dy*ax));
        if(r<1)
        {
            r*=-1;
        }
        r=r*0.5;
        printf("Case %d: %d %d %d\n",i,dx,dy,r);
    }
    return 0;
}
