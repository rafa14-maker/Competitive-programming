#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        double h,u,d,f;
        cin>>h>>u>>d>>f;
        if(h==0)break;
        double height=0;
        int counter=0;
        f=(u*f)/100;
        int day=1;
        while(height>=0.00&&height<h)
        {
           height+=u;
           if(u>0)u-=f;
           if(height>h)break;
           height-=d;
           if(height<0)break;
           day++;
        }
        if(height>=h)printf("success on day %d\n",day);
        else printf("failure on day %d\n",day);
    }
}
