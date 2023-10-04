#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
   vector<string>vs;
   set<string>sk;
   for(int i=0;i<n;i++)
   {
       string s;
       cin>>s;
       if(s[0]=='!'||s[0]=='0')vs.push_back(s);
       else sk.insert(s);
   }

   string pk;

   for(int i=0;i<vs.size();i++)
   {
       string frr;
       for(int j=1;j<vs[i].size();j++)frr+=vs[i][j];
       auto it = sk.lower_bound(frr);
       if(*it==frr)pk=frr;
   }

   if(pk.size()==0)cout<<"satisfiable"<<endl;
   else cout<<pk<<endl;

}

int main()
{
    solve();
}
