#include<bits/stdc++.h>
using namespace std;

int main()
{
    for(int a1=8;a1<=125;a1++)
    {
        for(int a2=a1;a2<=2000;a2++)
        {
            for(int a3=a2;a3<=2000;a3++)
            {
              //  cout<<1;
                if(a1*a2*a3>1000000)
                {
                    long long a4=1000000LL*(a1+a2+a3)/(a1*a2*a3-1000000LL);
                    if(a3<=a4&&a1+a2+a3+a4<=2000&&1000000LL*(a1+a2+a3+a4)==a1*a2*a3*a4)
                    {
                        printf("%.2lf %.2lf %.2lf %.2lf\n",a1/100.00,a2/100.00,a3/100.00,a4/100.00);
                    }
                }
            }
        }
    }
}
