#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    vector<pair<int,int> >v;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(make_pair(a,i+1));
    }

   sort(v.begin(),v.end());

   reverse(v.begin(),v.end());

   int sum=0;

   for(int i=0;i<k;i++)
   {
       sum+=v[i].first;
   }

   cout<<sum<<endl;

   vector<int>p;

   for(int i=0;i<k;i++)
   {
       p.push_back(v[i].second);
   }

   sort(p.begin(),p.end());

   if(k==1)
   {
       cout<<n<<endl;
       return 0;
   }

   for(int i=0;i<p.size();i++)
   {
       if(i==0)cout<<p[i]<<" ";

       else if(i==p.size()-1)cout<<(p[i]-p[i-1])+(n-p[i])<<" ";

       else cout<<(p[i]-p[i-1])<<" ";
   }
}
