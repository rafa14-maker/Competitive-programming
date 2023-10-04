#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   vector<int>v;

   int n;
   cin>>n;

   int arr[n+5];
   for(int i=0;i<n;i++)cin>>arr[i];

   for(int i=0;i<n;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           int k = ((arr[i]+arr[j])*(j-i+1))/2;
           int p = 0;
           for(int a=i;a<=j;a++)p+=arr[a];
           if(k!=p)
           {
               cout<<i<<" "<<j<<endl;
               cout<<"ues"<<endl;
               return ;
           }
       }
   }

    cout<<"ukp"<<endl;

}

int main()
{
    CherryFrog;
    //cout <<"Baby NO Fly!"<<endl;
int q;cin>>q;while(q--)solve();
 //  solve();
}


