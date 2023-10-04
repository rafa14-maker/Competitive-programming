#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
  string s,t; cin>> s >> t;
        sort(s.begin(),s.end());
        int a = 0,b = 0,c = 0;
        if(t == "abc"){
            for(int i = 0;i < s.size();i++){
                a += s[i] == 'a';
                b += s[i] == 'b';
                c += s[i] == 'c';
            }
            if(a){
                while(a--) cout<< 'a';
                while(c--) cout<< 'c';
                while(b--) cout<< 'b';
            }
            else{
                cout<< s << endl;
                return ;
            }
            for(int i = 0;i < s.size();i++){
                if(s[i] == 'a' || s[i] == 'b' || s[i] == 'c') continue;
                cout<< s[i];
            }
            cout<< endl;
            return ;
        }
        //  solve();
        else cout<< s << endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

