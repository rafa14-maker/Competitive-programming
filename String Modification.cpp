#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
   scanf("%d",&q);
    while(q--)
    {
       int n;
      scanf("%d",&n);
       string s;
       cin>>s;
       int k=1,p=1e8;
       string frr="",g=s,str=s;
      // vector<pair<string,int> >v;
       map<string,int>mp;
     //  v.push_back(make_pair(s,1));
       mp[s]=1;
       while(n>=k)
       {
           frr=s;
           for(int i=0;i<frr.size();i++)
           {
               if(i+k<frr.size())
               {
                   for(int j=i,p=i+k;j<p;j++,p--)swap(frr[j],frr[p]);

               }

           }
           if(frr<g)
           {
               g=frr;
              if(mp[g]==0)mp[g]=k+1;
              else mp[g]=max(mp[g],k+1);
           }
          k++;
       }
    // sort(v.begin(),v.end());
   //  frr=v[0].first;

    cout<<g<<"\n";
     printf("%d\n",mp[g]);
    }
}
