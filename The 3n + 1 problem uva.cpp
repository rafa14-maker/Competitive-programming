#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N = 1e6+6;
int arr[N];
int mx = 1e4+6;

/*
int f(int n,int cnt)
{
   // cout<<n<<endl;
   if(n==1)return cnt;
   if(arr[n]!=0)return arr[n];
   int ans = 0;
   if(n%2==0)ans = 1+ f(n/2,cnt);
   else ans = 1+ f(3*n +1,cnt);
   return arr[n] = ans;
}
*/

int cal(int n,int cnt)
{
    if(n==1)return cnt+1;
    int ans =0;
    if(n%2==0)ans = cal(n/2,cnt+1);
    else ans = cal(3*n +1,cnt+1);
    return ans ;
}

void solve()
{
   // cout<<"yes"<<endl;
   int a,b;
   while(scanf("%d %d",&a,&b)!=EOF){
       cout<<a<<" "<<b<<" ";
    if(a>b)swap(a,b);
   int sum = 0,idx = 0;
   for(int i=a;i<=b;i++)
   {
     int ans =   cal(i,0);
     if(sum<ans)
     {
         sum = ans;
         idx = i;
     }
   }
 //  cout<<a<<" "<<b<<" "<<sum<<endl;
   cout<<sum<<endl;
   }

}

int main()
{
  //  arr[1] = 1;
  // cout<< f(22,1) <<endl;
  //  for(int i=1;i<50;i++)f(i,1);
  // for(int i=1;i<50;i++)cout<<arr[i]<<" ";cout<<endl;
   // f();
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}

