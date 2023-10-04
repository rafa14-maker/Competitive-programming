#include<bits/stdc++.h>
using namespace std;

void solve()
{
   // cout<<"yes"<<endl;

   int a,b;
   cin>>a>>b;

   for(int i=1;i<=255;i++)
   {
       int k = a^i;
       if(k == b)
       {
           cout<< i <<endl;
           return ;
       }
   }

}

int main()
{
    solve();
}

