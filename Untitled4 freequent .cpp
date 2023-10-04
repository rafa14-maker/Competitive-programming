#include<bits/stdc++.h>

#define pf                  printf
#define sf(a)               scanf("%d",&a)
#define sfl(a)              scanf("%lld",&a)
#define sff(a,b)            scanf("%d %d",&a,&b)
#define sffl(a,b)           scanf("%lld %lld",&a,&b)
#define sfff(a,b,c)         scanf("%d %d %d",&a,&b,&c)
#define sfffl(a,b,c)        scanf("%lld %lld %lld",&a,&b,&c)
#define sffff(a,b,c,d)      scanf("%d %d %d %d",&a,&b,&c,&d)
#define sffffl(a,b,c,d)     scanf("%lld %lld %lld %lld",&a,&b,&c,&d)
#define sfffff(a,b,c,d,e)   scanf("%d %d %d %d %d",&a,&b,&c,&d,&e)
#define sfffffl(a,b,c,d,e)  scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e)
#define sfc(a)              scanf("%c",&a)
#define pii                 pair
#define ms(a,b)             memset(a,b,sizeof(a))
#define pb(a)               push_back(a)
#define pbp(a,b)            push_back({a,b})
#define db                  double
#define ft                  float
#define ll                  long long
#define ull                 unsigned long long
#define pii                 pair
#define ff                  first
#define ss                  second
#define sz(x)               x.size()
#define all(x)              x.begin(),x.end()
#define CIN                 ios_base::sync_with_stdio(0); cin.tie(0)
#define max3(a, b, c)       max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c)       min(a, b) < min(b, c) ? min(a, b) : min(b, c)
#define for0(i,n)          for(int i=0;i<n;i++)
#define for1(i,n)          for(int i=1;i=0; i--)
#define forab(i,a,b)       for(int i=a;i=a;i--)
#define stlloop(x)          for(__typeof(x.begin()) it=x.begin();it!=x.end();it++)
#define gcd(a, b)           __gcd(a, b)
#define lcm(a, b)           ((a)*((b)/gcd(a,b)))
#define case1(z)            cout<<"Case "<<z<=0 && tx=0 && ty<col
#define intlim              2147483648

#define inf                 100000008

/*------------------------------Graph Moves----------------------------*/
//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
//const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
//const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*---------------------------------------------------------------------*/

using namespace std;

const int mx = 1e5+5;

int input[mx],tree[3*mx],cnt[mx],start[mx];
map<int,int>mp;

void build (int node,int low,int high)
{
    if(low==high)
    {
        tree[node]=cnt[low];
        return;
    }
    int mid=(low+high)/2;
    int left=2*node;
    int right=2*node+1;
    build(left,low,mid);
    build(right,mid+1,high);
    tree[node]=max(tree[left],tree[right]);
}

int query(int node,int low,int high,int qlow,int qhigh)
{
    if(low>qhigh || high==qlow && high<=qhigh)
    {
        return tree[node];
    }
    int mid=(low+high)/2;
    int left=2*node;
    int right=2*node+1;
    int l=query(left,low,mid,qlow,qhigh);
    int r=query(right,mid+1,high,qlow,qhigh);
    return max(l,r);
}

int main()
{
    //CIN;
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int n,q;
    while(1)
    {
        sf(q);
         sf(n);
        for1(i,n)
        {
            sf(input[i]);
            mp[input[i]]++;
        }
        int y=-1,k;
        cout<<100<<endl;
        for1(i,n)
        {
            int x=mp[input[i]];
            cnt[i]=x;
            if(input[i]!=y)
            {
                k=i;
                y=input[i];
            }
            start[i]=k;
        }
        build(1,1,n);
        for1(i,q)
        {
            int qlow,qhigh,cnt1,cnt2,cnt3;
            sff(qlow,qhigh);
            if(input[qlow]!=input[qhigh])
            {
                int k=start[qlow]+cnt[qlow];
                cnt1=k-qlow;
                cnt2=qhigh-start[qhigh]+1;
                cnt3=query(1,1,n,k,start[qhigh]-1);
                pf("%d\n",max3(cnt1,cnt2,cnt3));
            }
            else pf("%d\n",qhigh-qlow+1);
        }
        ms(tree,0);
        ms(cnt,0);
        ms(start,0);
        mp.clear();
    }
    return 0;
}
