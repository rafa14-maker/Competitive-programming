#include<bits/stdc++.h>
using namespace std;

int n,m,k;
string arr[20];
map<string,int>mp;
vector<int>adj[20];
vector<string>vk;

int Set(int n,int pos)
{
    return (n | (1<<pos));
}
bool Check(int n,int pos)
{
    return (n & (1<<pos));
}

bool cmp(const string& L, const string& R){
  if(L.size() != R.size()) return L.size() > R.size();
  return L < R;
}


void f(int pos,int mk,string s,int cnt)
{
  //  cout<<pos<<" "<<s<<endl;
    if(cnt==k)
    {
        vk.push_back(s);
        return ;
    }
    if(pos==n)
    {
        return;
    }

   int a=mp[arr[pos]];
   if(Check(mk,a))
   {
       f(pos+1,mk,s,cnt);
       return ;
   }
   int fk=mk;
   for(int i=0;i<adj[a].size();i++)
   {
       int b=adj[a][i];
       fk=Set(fk,b);
   }
   string frr=s;
  if(s.size()>0) frr+=' ';
   frr+=arr[pos];
   f(pos+1,fk,frr,cnt+1);
   f(pos+1,mk,s,cnt);
}

void solve(int test)
{
     printf("Set %d:\n", test);
    mp.clear();
    vk.clear();
    for(int i=0;i<20;i++)adj[i].clear();
    cin>>n>>m>>k;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        for(int j=0;j<arr[i].size();j++)
        {
            arr[i][j]=toupper(arr[i][j]);
        }
    }
  /*  for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i].size()<arr[j].size())swap(arr[i],arr[j]);
            else if(arr[i].size()==arr[j].size()&&arr[i]>arr[j])swap(arr[i],arr[j]);
        }
    }*/

    sort(arr,arr+n,cmp);

    for(int i=0;i<n;i++)
    {
        mp[arr[i]]=i;
    }
    for(int i=0;i<m;i++)
    {
        string s,sk;
        cin>>s;
                for(int j=0;j<s.size();j++)
        {
            s[j]=toupper(s[j]);
        }
        cin>>sk;
                for(int j=0;j<sk.size();j++)
        {
            sk[j]=toupper(sk[j]);
        }
        int a=mp[s];
        int b=mp[sk];
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    f(0,0,"",0);
   // printf("Set %d:\n",test);
  //  sort(vk.begin(),vk.end(),cmp);

    for(int i=0;i<vk.size();i++)cout<<vk[i]<<"\n";
    printf("\n");
}

int main()
{
    int q;
    cin>>q;
    int test=0;
    while(q--)solve(++test);
}
