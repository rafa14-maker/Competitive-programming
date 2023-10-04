#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

ll n,m,rb,cb,rd,cd;
int arr[105][105];

int f(int i,int j,int a,int b,int cnt)
{
   // cout <<i<<" "<<j<<" "<<cnt<<endl;
    //if(cnt>=20)return 0;
    if(i==rd||j==cd)
    {
        return cnt;
    }
    if(i>=n)
    {
        a = -a;
    }
    if(j>=m)
    {
        b = -b;
    }
    int ans = f(i+a,j+b,a,b,cnt+1);
    return ans;
  //  if(cnt>=10)return cnt;
}

void solve()
{
   // cout<<"yes"<<endl;
   cin>>n>>m>>rb>>cb>>rd>>cd;

   cout<<f(rb,cb,1,1,0)<<endl;

}

int main()
{
    CherryFrog;
    //cout <<"All in!"<<endl;
   int q;cin>>q;while(q--)solve();
 //  solve();
}
