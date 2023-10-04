#include<bits/stdc++.h>
using namespace std;
using ll =long long;

bool leap(int k)
{
    if(k%400==0)return true;
    if(k%4==0&&k%100!=0)return true;
    return false;
}

ll cal(ll a,ll b)
{
    ll counter=0;
    counter+=b/4;
    counter-=(a-1)/4;
     counter-=b/100;
    counter+=(a-1)/100;
     counter+=b/400;
    counter-=(a-1)/400;
    return counter;
}

void solve(int test)
{
    string s;
    ll a,b;
    char c;
    cin>>s>>a>>c>>b;


     if(s!="February"&&s!="January")
    {
        b++;
    }

     string sk;
    ll ak,bk;
    char ck;
    cin>>sk>>ak>>ck>>bk;

    if(sk=="January")bk--;
    else if(sk=="February")
    {
        if(ak<29)bk--;
    }

    //cout<<b<<" "<<bk<<endl;
    ll k=cal(b,bk);
    printf("Case %d: %lld\n",test,k);
}

int main()
{
    int q;
    cin>>q;
    for(int i=1;i<=q;i++)solve(i);
}
