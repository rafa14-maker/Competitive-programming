#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

bool f(string arr,string frr)
{
    int idx = 0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==frr[idx])idx++;
        if(idx==frr.size())return true;
    }
    return false;
}

void solve()
{
   // cout<<"yes"<<endl;
   string arr,frr;
   cin>>arr>>frr;

   int len = arr.size();

   int mx = 0;

   for(int i=0;i<arr.size();i++)
   {
       for(int j=i;j<arr.size();j++)
       {
           string pk;
           for(int k=0;k<arr.size();k++)
           {
               if(k>=i&&k<=j)pk = pk;
                else pk+=arr[k];
           }
        //  cout << pk << endl;
           if(f(pk,frr))
           {
            //  cout << pk << endl;
            mx = max(mx,j-i+1);
           }
       }
   }

   cout << mx << endl;

}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}
