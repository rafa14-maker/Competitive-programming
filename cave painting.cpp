#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long n,k;
   cin>>n>>k;
   if(k>70)cout<<"No"<<endl;
   else
   {
       set<int>s;
       for(int i=1;i<=k;i++)
       {
           s.insert(n%i);
       }
       if(s.size()==k)cout<<"Yes"<<endl;
       else cout<<"No"<<endl;
   }
}
