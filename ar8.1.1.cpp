#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e,f,n;

    cin>>n;

    while(1==1)
    {
        n++;
        a=n%10;
        b=((n%100)-a)/10;
        c=((n%1000)-(b*10+a))/100;
        d=n-(c*100+b*10+a);
        d/=1000;
        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
        {
            cout<<n<<endl;
            return 0;
        }
    }

}
