#include<bits/stdc++.h>
using namespace std;

bool cmp(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main()
{
   int n;
   cin>>n;
   vector<pair<int,int> >v;
   int arr[n+5][3];
   for(int i=0;i<n-1;i++)
   {
       int a,b;
       cin>>a>>b;
       v.push_back(make_pair(a,b));
       arr[i][0]=a;
       arr[i][1]=b;
       arr[i][2]=0;
   }
   sort(v.begin(),v.end(),cmp);

  // for(int i=0;i<n;i++)cout<<v[i].first<<" "<<v[i].second<<endl;

   for(int i=0;i<n-1;i++)
   {
       int l=0,r=v.size()-1;
       while(l<=r)
       {
           int mid=(l+r)/2;
           if(v[mid].first==arr[i][0]&&v[mid].second==arr[i][1])
           {
               cout<<i<<endl;
               break;
           }
           else if(v[mid].first==arr[i][0])
           {
               if(v[mid].second<arr[i][1])
               {
                 l=mid+1;
               }
               else r=mid-1;
           }
           else if(v[mid].first<arr[i][0])l=mid+1;
           else r=mid-1;
       }
   }
}
