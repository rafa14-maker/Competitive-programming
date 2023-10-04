#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int n,k;
   cin>>n>>k;
   if(n==0)cout<<"Austin"<<endl;
  else  if(n<=k)cout<<"Adrien"<<endl;
   else
   {
       if(n%2==1)cout<<"Adrien"<<endl;
       else
       {if(k==1)cout<<"Austin"<<endl;
       else cout<<"Adrien"<<endl;
       }
   }
}

int main()
{
   solve();
}

