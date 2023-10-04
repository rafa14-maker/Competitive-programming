#include<bits/stdc++.h>
using namespace std;

int arr[150][150];
int frr[150][150];

int w,h,k;

int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};

bool vis[150][150];

vector<pair<int,int> >vp;

vector<string>vs;
vector<string>vk;

void f(int i,int j)
{
    if(vis[i][j])return ;
    vis[i][j]=true;
    vp.push_back({i,j});
    for(int k=0;k<4;k++)
    {
        int a=i+dx[k];
        int b=j+dy[k];
        if(a>=0&&a<w&&b>=0&&b<h)f(a,b);
    }
}

string convo(int nk)
{
    string s;
    while(nk>0)
    {
        char r=(char)'0'+(nk%10);
        nk/=10;
    }
    reverse(s.begin(),s.end());
    return s;
}

void built(int nk)
{
    sort(vp.begin(),vp.end());
    string s;
    for(int i=0;i<vp.size();i++)
    {
        int a=vp.first;
        int b=vp.second;
        if(i==0)
        {
            s+='|';
            s+=convo(arr[a][b]);
        }
        else if(b==vp.second+1)
        {
            s+='|';
            s+=convo(arr[a][b]);
        }
        else
        {
            vs.push_back(s);
            s="";
            s+='|';
            s+=convo(arr[a][b]);
        }
    }
    if(s.size()>0)
    {
       vs.push_back(s);
       vk.push_back(s);
    }

    for(int i=0;i<vp.size())

}

void solve()
{
   for(int i=0;i<150;i++)for(int j=0;j<150;j++)frr[i][j]=0,arr[i][j]=0;
   cin>>w>>h>>k;
   int cnt=0;
   for(int i=0;i<k;i++)
   {
       int a,b;
       cin>>a>>b;
       arr[a][b]= ++cnt;
   }
   cnt=0;
   for(int i=0;i<k;i++)
   {
       int a,b;
       cin>>a>>b;
       frr[a][b]= ++cnt;
   }
   memset(vis,false,sizeof vis);
   vs.clear();

   for(int i=0;i<w;i++)
   {
       for(int j=0;j<h;j++)
       {
           if(arr[i][j]!=0&&!vis[i][j])
           {
               vp.clear();
               f(i,j);
               built(1);
           }
       }
   }
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
