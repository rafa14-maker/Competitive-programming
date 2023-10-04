#include<iostream>
using namespace std;

int gcd_ex(int a,int b,int *x,int *y)
{
    if(a==0)
    {
        *x=0;
        *y=1;
        return b;
    }
    int x1,y1;
    int gcd=gcd_ex(b%a,a,&x1,&y1);
    *x=y1-(b/a)*x1;
    *y=x1;

    return gcd;
}


int main()
{
    int a,b,x,y;
    cin>>a>>b;

    int g=gcd_ex(a,b,&x,&y);
    cout<<g<<endl;
}
