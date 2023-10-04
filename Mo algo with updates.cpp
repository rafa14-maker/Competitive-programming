/////////////////////// All Is Well /////////////////////////

#include <bits/stdc++.h>

#define FOR(i, s, e) for(int i=s; i<e; i++)
#define loop(i, n) for(int i=0; i<n; i++)
#define CIN   ios_base::sync_with_stdio(0); cin.tie(0)
#define getint(n) scanf("%d", &n)
#define pb(a) push_back(a)
#define ll long long int
#define ull unsigned long long int
#define dd double
#define SZ(a) int(a.size())
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
#define mem(a, v) memset(a, v, sizeof(a))
#define all(v) v.begin(), v.end()
#define Unique(x)  x.erase(unique(all(x)), x.end())
#define pi acos(-1.0)
#define pf printf
#define sf scanf
#define mp make_pair
#define paii pair<int, int>
#define padd pair<dd, dd>
#define pall pair<ll, ll>
#define fr first
#define sc second
#define CASE(n) printf("Case %d: ",++n)
#define CASE_COUT cout<<"Case "<<++cas<<": "
#define inf 1000000000
#define EPS 1e-9
#define Harmonic(n) (0.577215664901532+log(n)+(1/(2*n)))     ///Use Only for large n
#define mx 50005

using namespace std;

int n,block;
ll data[mx],mapa[1000005],cnt[1000005],anss[100005];
vector< pair< pair<ll,int> ,int> >temp;
paii update_no[mx];
vector< pair< paii , paii > >query;
map<ll,ll>mm;


void Compression()
{
    sort(all(temp));
    loop(i,temp.size())
    {
        if(temp[i].sc==0)
        {
            ll val=temp[i].fr.fr;
            if(mm[val]==0)
            {
                mm[val]=i+1;
            }
            data[temp[i].fr.sc]=mm[val];
            mapa[data[temp[i].fr.sc]]=val;
        }
        else
        {
            ll val=temp[i].fr.fr;
            if(mm[val]==0)
            {
                mm[val]=i+1;
            }
            update_no[temp[i].fr.sc].sc=mm[val];
            mapa[update_no[temp[i].fr.sc].sc]=val;
        }
    }
}

bool comp(pair< paii , paii >x,pair< paii , paii >y)
{
    int p=x.fr.fr/block;
    int q=y.fr.fr/block;
    if(p==q)
    {
        int pp=x.fr.sc/block;
        int qq=y.fr.sc/block;
        if(pp==qq)
        {
            return x.sc.fr<y.sc.fr;
        }
        return x.fr.sc<y.fr.sc;
    }
    return x.fr.fr<y.fr.fr;
}

ll ans;


void update(int i,int x,int y)
{
    int index=update_no[i].fr;
    int vv=update_no[i].sc;

    int old=data[index];
    data[index]=vv;
    update_no[i].sc=old;

    if(index>=x && index<=y)
    {
        ll ager=mapa[old];
        ll akn=mapa[vv];
        cnt[old]--;
        if(cnt[old]==0)
        {
            ans-=ager;
        }
        cnt[vv]++;
        if(cnt[vv]==1)
        {
            ans+=akn;
        }
    }
}


void Add(int i)
{
    int vv=data[i];
    ll pp=mapa[vv];
    cnt[vv]++;
    if(cnt[vv]==1)
        ans+=pp;
}

void Remove(int i)
{
    int vv=data[i];
    ll pp=mapa[vv];
    cnt[vv]--;
    if(cnt[vv]==0)
        ans-=pp;
}


int main()
{
	int t,cas=0;
	getint(n);
	loop(i,n)
	{
	    sf("%lld",&data[i+1]);
	    temp.pb(mp(mp(data[i+1],i+1),0));
	}
	int q;
	getint(q);
	int cntt=0;
	loop(i,q)
    {
        getchar();
        int x,y;
        char c;
        sf("%c %d %d",&c,&x,&y);
        if(c=='U')
        {
            update_no[++cntt]=mp(x,y);
            temp.pb(mp(mp(y,cntt),1));
        }
        else
        {
            query.pb(mp(mp(x,y),mp(cntt,i)));
        }
    }

    Compression();

    block=sqrt(n);

    sort(all(query),comp);

    int lef=1,rt=0,update_tim=0;
    ans=0;
    mem(anss,-1);
    loop(i,query.size())
    {
        int x=query[i].fr.fr;
        int y=query[i].fr.sc;
        int tt=query[i].sc.fr;
        while(update_tim<tt)
        {
            update_tim++;
            update(update_tim,lef,rt);
        }
        while(update_tim>tt)
        {
            update(update_tim,lef,rt);
            update_tim--;
        }
        while(lef<x)
        {
            Remove(lef);
            lef++;
        }
        while(lef>x)
        {
            lef--;
            Add(lef);
        }
        while(rt<y)
        {
            rt++;
            Add(rt);
        }
        while(rt>y)
        {
            Remove(rt);
            rt--;
        }
        anss[query[i].sc.sc]=ans;
    }

    loop(i,q)
    {
        if(anss[i]==-1) continue;
        pf("%lld\n",anss[i]);
    }


	return  0;

}

