#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int> >v;
    for(int i=1;i<=n;i++)
    {
        int a=i;
        int sum=0;
        while(a>0)
        {
            sum+=(a%10);
            a/=10;
        }
        sum=i/sum;
        v.push_back(make_pair(sum,i));
    }
    sort(v.begin(),v.end());
   // for(int i=0;i<v.size();i++)cout<<v[i].second<<" "<<v[i].first<<endl;

   for(int i=0;i<v.size();i++)
   {
       for(int j=0;j<i;j++)
       {
           if(v[i].second==v[i].second&&v[i].first>v[j].first&&v[j].first!=-1)
           {
               v[i].first=-1;
               break;
           }
       }
   }
   for(int i=0;i<v.size();i++)
   {
       if(v[i].first!=-1)cout<<v[i].second<<" "<<v[i].first<<endl;
   }
}
