#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
 int n;
 cin>>n;
 string s;
 cin>>s;
 int cnt =0 ;

 for(int i=0;i<s.size();i++)
 {
     if(s[i]=='y')
     {
         int idx = 0,j;
         for( j=i+1;j<s.size();j++)
         {
             if(s[j]=='b')idx++;
             else break;
         }
        if(idx>=2) cnt += idx-1;
        i = j-1;
     }
 }

 cout << cnt<<endl;
}

int main()
{
    CherryFrog;
    //cout <<"All in!"<<endl;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

