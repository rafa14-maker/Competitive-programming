#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>vt;
    vector<int>vm;
    bool tr=true;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='T')vt.push_back(i);
        else vm.push_back(i);
    }

    if(vt.size()!=vm.size()*2)
    {
        cout<<"NO"<<endl;
        return ;
    }

   int l=0,r=0;
  // bool tr=true;

   for(int i=0;i<vm.size();i++)
   {
       if(vt[l]>vm[i])
       {
           tr=false;
           break;
       }
       while(r<vt.size()&&vt[r]<vm[i])r++;
       if(r==vt.size())
       {
           tr=false;
           break;
       }
       if(vt[l]<vm[i]&&vm[i]<vt[r])
       {
           l++;
           r++;
       }
       else
       {
           tr=false;
           break;
       }
   }
 //  if(r!=vt.size())tr=false;

   if(tr)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
