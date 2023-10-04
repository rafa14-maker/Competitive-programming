#include<bits/stdc++.h>
using namespace std;

map<string,int>mp;
string name[30];
int arr[30];

void solve(int n,int m,int test)
{
    mp.clear();
    for(int i=0;i<=n;i++)arr[i]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>name[i];
        mp[name[i]]=i;
    }
    string a,b;
    int k;

    while(m--)
    {
        cin>>a>>b>>k;
        int u=mp[a],v=mp[b];
         arr[u]+=k;
        arr[v]-=k;
    }

   printf("Case #%d: \n",test) ;


   for(int i=1;i<n;i++)
   {
       if(arr[i]<0)
       {
           cout<<name[i]<<" "<<name[n]<<" "<<-arr[i]<<endl;
       }
       else
       {
           cout<<name[n]<<" "<<name[i]<<" "<<arr[i]<<endl;
       }
       arr[n]-=arr[i];
   }
   printf("\n");
}

int main()
{
    int cnt=0;
    while(1)
    {
        int n,m;
        cin>>n>>m;
        if(n==0&&m==0)break;
        cnt++;
        solve(n,m,cnt);
    }
}
