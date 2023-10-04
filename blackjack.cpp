#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n;
    k=n-10;
    if(k<=0||k>=12)
    {
        cout<<0<<endl;
    }
   else if(k>=2&&k<=9)
    {
        cout<<4<<endl;
    }
    else if(k==10)
    {
        cout<<15<<endl;
    }
    else if(k==1||k==11)
    {
        cout<<4<<endl;
    }
}
