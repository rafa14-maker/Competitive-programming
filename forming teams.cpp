#include<bits/stdc++.h>
using namespace std;

int p[1000],rnk[1000];

int find1(int x) /// ei function er moddhe check hobe jei value ta nisi oita ki p array er moddhe ache kina..///
{
    if(p[x]==x)
        return x;
    return find1(p[x]);
}

int main()
{
    int n,m,ans=0;
    cin>>n>>m; /// Input nise //
    for(int i=1;i<=n;i++) /// 1 theke n projonto rnk 1 korse ar p array te value store korse ///
    {
        p[i]=i;
        rnk[i]=1;
    }
    for(int i=0;i<m;i++)///etar moddhe prottek element koybar ase seta check hobe. ejonno m projonto loop chalaise///
    {
        int u,v;
        cin>>u>>v;
        int a=find1(u);
        int b=find1(v);
        if(a==b&&rnk[a]%2)/// jodi duita soman hoy and rnk jodi 2 er multiple na hoy...///
            ans++;
        p[b]=p[a];///nahole oi  index bad diye b ke a er index e niye jabo///
        rnk[a]+=rnk[b]; /// rank bariye dibo ///
    }
    if((n-ans)%2)
        ans++;
    cout<<ans;
    return 0;
}
