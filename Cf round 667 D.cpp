#include<bits/stdc++.h>
using namespace std;

int arr[20],n;

void solve()
{
   string s;
   cin>>s;
   int cnt=0;

   for(int i=0;i<s.size();i++)
   {
       cnt+=(int)(s[i]-'0');
   }

   cout<<cnt<<endl;

}


int main()
{
   int q;cin>>q;while(q--)solve();
  //  solve();
}

