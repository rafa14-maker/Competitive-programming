#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    int t=0;
    while(q--)
    {
        float sum=0.00,num;

        for(int i=1;i<=12;i++)
        {
            float x;
            cin>>x;
            sum+=x;
        }
       sum/=12.00;
        long long avg=sum;
        long long en = avg%1000;
        avg/=1000;
        num=sum-(long long)sum;
        printf("%d $",++t);
        if(avg>0)printf("%lld,",avg);
        printf("%.2f\n",en+num);
    }
}
