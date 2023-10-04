#include<bits/stdc++.h>
using namespace std;

int n,a[100010],b[100010],f,g;
long long ans_a=0,ans_b=0;

void f_a()
{
    if(b[g]>a[f]&&g>=0)
    {
        g--;
        return ;
    }
    ans_a+=(long long)a[f];
    f--;
}

void f_b()
{
    if(b[g]<a[f]&&f>=0)
    {
        f--;
        return ;
    }
    ans_b+=(long long)b[g];
    g--;
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int j=0;j<n;j++)cin>>b[j];

    sort(a,a+n);
    sort(b,b+n);

    f=n-1,g=n-1;

    while(1)
    {
        if(f==-1&&g==-1)break;
        f_a();
        f_b();
    }
    cout<<ans_a-ans_b<<endl;
}
