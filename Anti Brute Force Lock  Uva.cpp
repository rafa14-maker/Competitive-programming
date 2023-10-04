#include<bits/stdc++.h>
using namespace std;

const int N = 505;

int n;
vector<pair<int,pair<int,int> > >vk;
int parent[N];
int r[N];

int fun(string a,string b)
{
    int sum=0;
    for(int i=0;i<a.size();i++)
    {
        int kp=(int)a[i]-'0';
        int pk=(int)b[i]-'0';
        int kc=abs(kp-pk);
        if(kc>5)kc=10-kc;
        sum+=kc;
    }
    return sum;
}

int fi(int u)
{
    if(parent[u]==u)return u;
    return fi(parent[u]);
}

bool isSame(int u,int v)
{
    return fi(u)==fi(v);
}

void uni(int u,int v)
{
    if(!isSame(u,v))
    {
        int x=fi(u);
        int y=fi(v);
        if(r[x]>r[y])
        {
            parent[y]=x;
        }
        else
        {
            parent[x]=y;
            if(r[x]==r[y])r[y]++;
        }
    }
}


void solve()
{
   cin>>n;
   vector<string>vs;
 //  vs.push_back("0000");
   for(int i=0;i<n;i++)
   {
     //  int a;
       string a;
       cin>>a;
       vs.push_back(a);
   }

     int first_step = 9999;
        for (int i = 0; i < vs.size(); ++ i) {
            if (first_step > fun("0000", vs[i])) {
                first_step = fun("0000", vs[i]);
            }
        }

   for(int i=0;i<=n;i++)
   {
       parent[i]=i;
       r[i]=0;
   }
   vk.clear();

   for(int i=0;i<vs.size();i++)
   {
       for(int j=i+1;j<vs.size();j++)
       {
          // cout<<vs[i]<<" "<<vs[j]<<" ";
           int c=fun(vs[i],vs[j]);
         //  cout<<c<<endl;
           vk.push_back(make_pair(c,make_pair(i,j)));
       }
   }

   sort(vk.begin(),vk.end());

    int ans=0;

    pair<int,pair<int,int> >fr;

    for(int i=0;i<vk.size();i++)
    {
        fr=vk[i];
        int a=fr.second.first;
        int b=fr.second.second;
        if(!isSame(a,b))
        {
            ans+=fr.first;
            uni(a,b);
        }
    }

    cout<<ans+first_step<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
