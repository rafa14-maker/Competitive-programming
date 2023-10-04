#include<bits/stdc++.h>
using namespace std;

int C(int price)
{
    int cons=0;
    cons+=min(max(0,price/2),100);
    price-=2*100;
    cons+=min(max(0,price/3),9900);
    price-=3*9900;
    cons+=min(max(0,price/5),990000);
    price-=5*990000;
    cons+=max(0,price/7);
    return cons;
}

int V(int cons)
{
    int price=0;
    price+=min(max(0,cons*2),2*100);
    cons-=100;
    price+=min(max(0,cons*3),3*9900);
    cons-=9900;
    price+=min(max(0,cons*5),5*990000);
    cons-=990000;
    price+=max(0,cons*7);
    return price;
}

int main()
{
    int a,b;
    while(cin>>a>>b,a|b)
    {
        int tot=C(a);
        int l=0,r=tot;
        int ans=0;
        while(l<r)
        {
            int mid=(l+r)/2;
            int diff=V(tot-mid)-V(mid);
            if(diff>b)l=mid;
            else if(diff<b)r=mid;
            else
            {
                ans=mid;
                break;
            }
        }
        cout<<V(ans)<<endl;
    }
}
