#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

ll mod(ll a, ll m)
{
    return (a%m + m) % m;
}

ll mk = 998244353;

long long  bigmod(long long f,long long b ,long long m)
{
    if(b==0)
    {
        return 1;
    }
    long long x=bigmod(f,b/2,m);
    x=mod((x*x),mk);
    if(b%2==1)x=mod((x*f),mk);

    return x;
}


void solve()
{
   // cout<<"yes"<<endl;
   int n;
   cin>>n;
   int arr[n+5];
   bool tr  =false, kp  = false;
 //  ll mod = 998244353;
 int cnt1= 0 ,cnt2 =0;
   for(int i=0;i<n;i++){cin>>arr[i];
    if(arr[i]==0)tr= true,cnt1++;
    if(arr[i]==1)kp=true,cnt2++;
   }

   if(cnt1==n)
   {
    ll ab = bigmod(2,cnt1,mk);
    cout<<ab-1<<endl;
    return ;
   }

   if(cnt2 == n)
   {
        ll ab = bigmod(2,cnt1,mk);
    cout<<ab-1<<endl;

       return ;
   }

   if(cnt1+cnt2==n)
   {
         ll a = bigmod(2,cnt1-1,mk);
     //   a--;
        ll b = bigmod(2,cnt2-1,mk);

        ll ab = mod(a+b,mk);

        cout<< ab<<endl;

        return ;
   }


   if(!tr&&!kp)
   {
       cout<<0<<endl;
       return ;
   }
   else if(tr&&kp)
   {
       ll m = n-cnt1;
     //   ll qk = bigmod(2,m,mk);
        ll a = bigmod(2,cnt1-1,mk);
       // a--;
        ll b = bigmod(2,cnt2-1,mk);
      //  b--;
       // ll mp = bigmod(2,m-1,mk);
        ll ac = mod(a*m,mk);
        ll bc = mod(b*m,mk);
        ll ck = mod(cnt1*cnt2,mk);
        ll abc = mod(ac+bc,mk);
        ll abcd = mod(abc1+ck,mk);
        cout << abcd << endl;
   }
   else if(tr)
   {
        ll m = n-cnt1;
        ll ac = bigmod(2,cnt1-1,mk);
       // ll km = bigmod(2,m,mk);
        ll ab = mod(ac*m,mk);
        cout << ab << endl;
   }
   else if(kp)
   {
        ll m = n-cnt2;
        ll b = bigmod(2,cnt2-1,mk);
       // ll km = bigmod(2,cnt2,mk);
        ll ab = mod(b*m,mk);
        cout << ab << endl;
   }
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 // solve();
}

