#include<bits/stdc++.h>
using namespace std;

void solve()
{
   string s;
   cin>>s;
   vector<int>odd;
   vector<int>even;
   for(int i=0;i<s.size();i++)
   {
       int a=s[i]-'0';
       if(a%2==0)even.push_back(a);
       else odd.push_back(a);
   }
   int i=0,j=0;
   while(i<odd.size()&&j<even.size())
   {
       if(odd[i]<even[j])
       {
           cout<<odd[i];
           i++;
       }
       else
       {
           cout<<even[j];
           j++;
       }
   }

   while(i<odd.size())
   {
           cout<<odd[i];
           i++;
   }

   while(j<even.size())
   {
           cout<<even[j];
           j++;
   }
  cout<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
