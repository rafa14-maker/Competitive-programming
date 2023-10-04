#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll arr[2];
    arr[0]=0;
    arr[1]=0;
    ll n ;
    cin>>n;
    int cnt = 0;
    ll a=0,b=0;

    while(n>0)
    {
        if(n==4)
        {
            if(cnt%2==0)
            {
                a+=3;
                b+=1;
            }
            else
            {
                b+=3;
                a+=1;
            }
            break;
        }
        if(n%2==1)
        {
            if(cnt%2==0)a++;
            else b++;
            n-=1;
        }
        else
        {
            ll pk = n/2;
            if(pk%2==0)
            {
                  if(cnt%2==0)a++;
                  else b++;
            n-=1;
            }
            else
            {
            if(cnt%2==0)a+=pk;
            else b+=pk;
              n-=pk;
            }
        }
        cnt++;
    }
    cout<<a<<"\n";
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
