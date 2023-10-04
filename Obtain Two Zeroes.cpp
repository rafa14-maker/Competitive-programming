#include<bits/stdc++.h>
using namespace std;

long long max1(long long a,long long b)
{
    if(a>=b)return a;
    else return b;
}
long long min1(long long a,long long b)
{
    if(a<=b)return a;
    else return b;
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long a, b;
        cin>>a>>b;
        if(a==1&&b==1||(a==2&&b==2)||min(a,b)*2<max1(a,b))cout<<"NO"<<endl;
        else
        {
            int c=max1(a,b);
            int d=min1(a,b);

            if((c+d)%3!=0)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}
