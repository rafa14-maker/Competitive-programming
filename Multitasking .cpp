#include<bits/stdc++.h>
using namespace std;

const int N = 1000000;

int main()
{
   while(1)
   {
       int n,m;
       scanf("%d %d",&n,&m);
       if(n==0&&m==0)break;
       vector<pair<int,int> >v;
       for(int i=0;i<n;i++)
       {
           int a,b;
           cin>>a>>b;
           v.push_back(make_pair(a,b));
       }
       for(int i=0;i<m;i++)
       {
           int a,b,c;
           cin>>a>>b>>c;
           while(b<=N)
           {
               v.push_back(make_pair(a,b));
               a+=c;
               b+=c;
           }
       }
       sort(v.begin(),v.end());
       int flag=0;
       for(int i=0;i<v.size();i++)
       {
           int a=v[i].first,b=v[i].second;
           int l=0,r=v.size()-1;
          // int flag=0;
           while(l<=r)
           {
               int mid=(l+r)/2;
             if(i!=mid&&(v[mid].second>a&&v[mid].second<=b||v[mid].first<b&&v[mid].first>=a||v[mid].first>=a&&v[mid].second<=b))
               {
                   flag++;
                   break;
               }
               else if(v[mid].first<=a&&v[mid].second<=b)
               {
                   l=mid+1;
               }
               else r=mid-1;
           }
           if(flag>0)break;
       }
       if(flag==0)printf("NO CONFLICT\n");
       else printf("CONFLICT\n");
   }
}
