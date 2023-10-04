#include<bits/stdc++.h>
using namespace std;

int test;

int cal(vector<int>v)
{
   if(v.size()==2||v.size()==3)
   {
       return v.back()-v[0];
   }
}

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<pair<char,int> >v;
      v.push_back(make_pair('B',0));
    for(int i=0;i<n;i++)
    {
        char c,ck;
        int a;
        cin>>c>>ck>>a;
       if(c=='B') v.push_back(make_pair(c,a));
    }
       v.push_back(make_pair('B',k));


  int sum=0;
   for(int i=0;i<v.size();i++)
   {
       if(v[i].first=='B')
       {
           vector<int>pk;
           pk.push_back(v[i].second);
           for(int j=i+1;j<v.size();j++)
           {
               if(v[j].first!='B')
               {
                   pk.push_back(v[j].second);
               }
               else
               {
                   pk.push_back(v[j].second);
                   int kp=cal(pk);
                   sum=max(sum,kp);
                   break;
               }
           }
       }
   }
   cout<<sum<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
