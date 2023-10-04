#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

set<string>vs;
set<int>v;
set<int>pk;

string arr,frr;

ll n,k;

void f(int a,int b,string s)
{
    if(a<0||b<0)return ;
   if(a==0&&b==0)
   {
       vs.insert(s);
       return ;
   }
   if(a>=0)f(a-1,b,s+'a');
   if(b>=0)f(a,b-1,s+'b');
}

void cal()
{
    int len = n+k;

    for(int i=0;i<len;i++)
    {
        if(i%2==0)arr+='a',frr+='b';
        else arr+='b',frr+='a';
    }
}

void kp()
{
    for(auto it = vs.begin();it!=vs.end();it++)
    {
        string fk = *it;

        int cnt = 0,kcnt = 0;

        for(int j=0;j<arr.size();j++)
        {
            if(fk[j] != arr[j])cnt++;
            if(fk[j] != frr[j])kcnt++;
        }

        v.insert(cnt);
        v.insert(kcnt);

    }
}

void solve()
{
   // cout<<"yes"<<endl;
  // ll n,k;
 // vs.clear();
 // v.clear();
  pk.clear();
 // arr = "";
//  frr ="";
   cin>>n>>k;
   if(n>k)swap(n,k);
  // cal();
 //  f(n,k,"");

 //  kp();

 //  cout << v.size() << endl;
  // for(auto it = v.begin();it != v.end();it++)cout<< *it <<" ";cout<<endl;

   int len = n+k;

   for(int i=0;i<=n;i++)
   {
       int ksum = (len/2)+(len%2);
       int psum = len/2;
       ksum = abs(ksum-len);
       psum = abs(psum-len);
       ksum += 2*i;
       psum += 2*i;
       pk.insert(ksum);
       pk.insert(psum);
   }
   cout << pk.size() <<endl;
   for(auto it = pk.begin();it != pk.end();it++)cout<< *it-n <<" ";cout<<endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
  //solve();
}

