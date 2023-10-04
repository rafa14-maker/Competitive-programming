#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<pair<int,int> >v;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
   int arr[n+5]={0};
   for(int i=0;i<v.size();i++)
   {
       int x=v[i].first;
       int y=v[i].second;
       arr[x]=y;
   }
  if(n>1&&arr[1]==0) arr[1]=1;
   int flag=0;
    for(int i=0;i<v.size();i++)
   {
       int x=v[i].first;
       int y=v[i].second;
       if(arr[x]!=y)flag++;
   }
   if(flag==0)
   {
       for(int i=1;i<=n;i++)cout<<arr[i];cout<<"\n";
   }
   else
   {
       cout<<-1<<endl;
   }
}
