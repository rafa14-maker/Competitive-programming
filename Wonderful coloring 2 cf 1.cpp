#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

 map<int,int>mp;
 map<int,int>pdx;

void solve()
{
   // cout<<"yes"<<endl;
   mp.clear();
   pdx.clear();
   int n,k;
   cin>>n>>k;
 //  map<int,int>mp;
   int arr[n+5];

   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       mp[arr[i]]++;
   }

   int cnt  = 0;

   for(int i=0;i<n;i++)
   {
       if(mp[arr[i]]>=k)mp[arr[i]] = k;
       else mp[arr[i]] = 0,cnt ++;
   }

   cnt  = cnt - (cnt%k);
   int kp = 1;

   for(int i=0;i<n;i++)
   {
       int idx = arr[i];
       if(mp[idx]==0)
       {
           if(cnt > 0)
           {
               cnt --;
               cout << kp << " ";
               kp++;
               if(kp>k)kp=1;
           }
           else cout << 0 << " ";
       }
       else if(mp[idx]>0)
       {
           cout<< mp[idx] << " ";
           mp[idx] --;
           if(mp[idx] == 0)mp[idx] = -1;
       }
       else cout << 0 << " ";
   }

  cout << endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

/*

1
13 3
3 1 4 1 5 9 2 6 5 3 5 8 9

*/

