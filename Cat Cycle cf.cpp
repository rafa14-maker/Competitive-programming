#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
   // k--;
    if(n%2==0)
    {
      //  k--;
        cout<<(k%(n-1))+1<<endl;

    }
    else
    {
         int mn=n/2+1;
         int pk=k/mn;
        if(k>=mn) k+=pk;
       //  else k--;
         cout<<(k%(n-1))+1<<endl;
    }
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
