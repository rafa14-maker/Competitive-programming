#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define ld long double
//#define mx 200005
#define fr first
#define se second
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main()
{
   fast;
   int t;
   cin >> t;
   while(t--){
     int a,b;
     cin >> a >> b;
     if(a == b || a>b || (a == 2 && b == 3)) cout << "YEs\n";
     else{
        if(a<=3) cout << "no\n";
        else cout << "yes\n";
     }

   }
   return 0;
}
