#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
    int n,k;
    cin>>n>>k;
    string arr;
    string frr;
    cin>>arr>>frr;

    map<int,int>have;
    map<int,int>need;

    // i was not able to solve it so i watched the tutorial

  /*  for(int i=0;i<arr.size();i++)
    {
        mp[arr[i]]++;
    }

    int cnt = 1 ;
    int i;

    for( i=1;i<frr.size();i++)
    {
        if(frr[i] == frr[i-1])cnt++;
        else
        {
           int p = cnt %k;
           if(mp[frr[i-1]]<p)
           {
           //    cout <<i<<endl;
               cout << "No" << endl;
               return ;
           }
           else mp[frr[i-1]]-=p;
           int x = k*(cnt/k);
           bool tr = false;
           for(char j = frr[i-1];j>='a';j--)
           {
               if(mp[j]>=x)
               {
                   mp[j]-=x;
                   tr = true;
                   break;
               }
           }
           if(!tr)
           {
              //  cout <<i<<endl;
                 cout << "No" << endl;
               return ;
           }
           cnt = 1;
        }
    }

           int p = cnt %k;
           if(mp[frr[i-1]]<p)
           {
               // cout <<i<<endl;
               cout << "No" << endl;
               return ;
           }
           else mp[frr[i-1]]-=p;
           int x = k*(cnt/k);
           bool tr = false;
           for(char j = frr[i-1];j>='a';j--)
           {
               if(mp[j]>=x)
               {
                   mp[j]-=x;
                   tr = true;
                   break;
               }
           }
           if(!tr)
           {
              //  cout <<i<<endl;
                 cout << "No" << endl;
               return ;
           }
       //    cnt = 1;

           cout << "Yes" << endl;
           */


            for(auto& c: arr)
             have[c-'a']++;
            for(auto& c: frr)
            need[c-'a']++;

           bool tr = true;

           for(int i=0;i<26;i++)
           {
               if(have[i]<need[i]||(have[i]-=need[i])%k)tr = false;
             have[i+1]+=have[i];
           }

           if(tr) cout << "Yes" << endl;
           else cout << "No" << endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

/*

1
6 2
aaabba
ddddcc

*/

