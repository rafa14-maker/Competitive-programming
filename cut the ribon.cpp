/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define rev(v)              reverse(v.begin(),v.end())
#define srt(v)              sort(v.begin(),v.end())
#define minv(v)             *min_element(v.begin(),v.end())
#define maxv(v)             *max_element(v.begin(),v.end())
#define lop(j,n)           for(int i=j;i<n;i++)
#define lop1(i,n)          for(int i=1;i<=n;i++)

#define nl                  '\n'
#define pf                  printf
#define sfc(a)              scanf("%c",&a)
#define sfs(a)              scanf("%s",&a)
#define sfi(a)             scanf("%d",&a)
#define sfi2(a,b)           scanf("%d %d",&a,&b)
#define sfi3(a,b,c)         scanf("%d %d %d",&a,&b,&c)
#define sfi4(a,b,c,d)       scanf("%d %d %d %d",&a,&b,&c,&d)
const int inf       = 0x3f3f3f3f;


const int N = 1e6+7, INF = 1e9+7, K = 9,M=1e5+2;
int i,j,k,l,a,b,c;

//ll fact[mx];
//void factorial(){fact[0]=1;loop1(i,mx-1) fact[i]=(fact[i-1]*i)%mod;}
//ll nCr(ll n,ll r){return (fact[n]*ModInverse(((ll)fact[n-r]*(ll)fact[r])%mod,(ll)mod))%mod;}
//bool mark[mx];vector<ll>prime;
//void sieve(){memset(mark,true,sizeof(mark));for(ll i=3;i<=(ll)sqrt(mx);i+=2){if(mark[i]){for(ll j=i*i;j<=mx;j+=2*i) mark[j]=false;}}prime.push_back(2);for(ll i=3;i<=mx;i+=2) if(mark[i]) prime.push_back(i);}
 int dp[N];
 int solve(int n)
     {
       if(n<0) return -1e18;
            if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
                dp[n]= 1+solve(n-a);
    dp[n]= max(dp[n],1+solve(n-b));
            dp[n]= max(dp[n],1+solve(n-c));

                    return dp[n];
                }

int main()
{
    //seive();
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n;
   sfi(n);
   sfi(a);
   sfi(b);
   sfi(c);
   memset(dp,-1,sizeof(dp));
   cout<<solve(n);
}
