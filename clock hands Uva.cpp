#include<bits/stdc++.h>
using namespace std;

void solve()
{
    float h,m,t,i,j,l,n,a;
    while(scanf("%f:%f",&h,&m)==2){
    // scanf("%f:%f",&h,&m);
     if(h==0&&m==0)break;
     i=((h*30)+(m/2));
     j=m*6;
     t=i-j;
     if(t<0)t*=(-1);
     if(t>180)t=360-t;
     printf("%.3f\n",t);
    }
    return ;
}

int main()
{
    solve();
}

