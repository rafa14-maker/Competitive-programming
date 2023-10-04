#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
int n;
cin>>n;
int arr[n+5],frr[n+5];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
    frr[i]=arr[i];
}
int one=0,two=0;

for(int i=0;i<n;i++)
{
    int a;
    cin>>a;
    if(a==0)one++;
    else two++;
}

sort(arr,arr+n);

bool tr=true;

for(int i=0;i<n;i++)if(arr[i]!=frr[i])tr=false;

if(tr||(one&&two))cout<<"Yes"<<endl;
else cout<<"No"<<endl;

}


int main()
{
    int q;cin>>q;while(q--)solve();
   // solve();
}

