#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    getchar();
   string arr[n+5],frr[n+5];
    for(int i=0;i<n;i++)
    {
      string s;
      getline(cin,s);
      arr[i]=s;
    }
    for(int i=0;i<n;i++)
    {
     string s;
      getline(cin,s);
     frr[i]=s;
    }
   int i,j;

   for(i=n-1,j=n-1;i>=0;i--)
   {
       if(arr[i]==frr[j])j--;
   }

   for(;j>=0;j--)cout<<frr[j]<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        solve();
        cout<<endl;
    }
}
