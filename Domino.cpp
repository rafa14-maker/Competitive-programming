#include<iostream>
using namespace std;
int main()
{
    int a,b,n,i;
    cin>>n;
    int sum1=0,sum2=0;
    bool k=false;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a%2+b%2==1)
        {
            k=true;
        }
        sum1+=a;
        sum2+=b;
    }
    if(sum1%2==0&&sum2%2==0)
    {
        cout<<0<<endl;
    }
    else if(sum1%2==1&&sum2%2==1&&k==true)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
}
