#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n,i,k=0,j=0,l=0,c,d,e;

    cin>>a>>b;

    if(a==0&&b==0)
    {
        cout<<"0 0"<<endl;
        return 0;
    }
    else if(a==0&&b!=0||b==0&&a!=0)
    {
        cout<<"-1 -1"<<endl;
        return 0;
    }

    for(i=1;i<pow(10,a);i++)
    {
        k=i;
       c=k%10;
       k/=10;
       d=k%10;
       k/=10;
       e=k%10;
        if(c+d+e==b)
        {
            cout<<i<<endl;
            break;
        }
    }
    for(i=pow(10,a)-1;i>0;i--)
    {
        k=i;
       c=k%10;
       k/=10;
       d=k%10;
       k/=10;
       e=k%10;
        if(c+d+e==b)
        {
            cout<<i<<endl;
            break;
        }
    }

}
