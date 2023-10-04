#include<bits/stdc++.h>
using namespace std;

void solve()
{
   long long n,k;
   cin>>n>>k;
  vector<long long>v;
  set<long long>s;
   for(int i=0;i<n;i++)
    {
        long long a;
        cin>>a;
        v.push_back(a);
        s.insert(a);
    }

    long long idx=0;
   long long mx=0;

   for(int i=0;i<n;i++)
   {
       mx=max(v[i],mx);
       if(v[i]==idx)idx++;
   }

   if(idx<mx)
   {
       if(k==0)
       {
           cout<<s.size()<<endl;
           return ;
       }
      long long kt = (idx+mx);
       kt = kt/2+1;

      v.push_back(kt);

      long long kp=0,pk=0;

      s.clear();

      for(int i=0;i<v.size();i++)
      {
          s.insert(v[i]);
          kp=max(v[i],kp);
          if(v[i]==pk)pk++;
      }

      if(kp==pk)cout<<s.size()+k-1<<endl;
      else cout<<s.size()<<endl;

   }
   else
   {
       cout<<s.size()+k<<endl;
   }

}
int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
