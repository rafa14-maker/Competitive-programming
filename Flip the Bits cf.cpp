#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string frr,arr;
    cin>>frr>>arr;
    int one=0,zero=0;
 //  int vis[n+5];
 //  for(int i=0;i<n;i++)vis[i]=0;

   vector<int>v;

   for(int i=0;i<n;i++)
   {
       if(frr[i]=='1')one++;
       else zero++;

       if(one==zero)
       {
           v.push_back(i);
       }

   }

   //v.push_back(frr.size()-1);

   bool tr=true;
   int idx=0;

   for(int i=0;i<v.size();i++)
   {
       for(int j=idx;j<v[i];j++)
       {
           if(j+1<=v[i]&&((frr[j]!=arr[j]&&frr[j+1]==arr[j+1])||(frr[j]==arr[j]&&frr[j+1]!=arr[j+1])))
           {
          //    cout<<j<<endl;
               tr=false;
           }
       }

       idx = v[i]+1;
   }
   if(v.size()==0&&frr!=arr)
   {
       cout<<"NO"<<endl;
       return ;
   }

   if(tr)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
