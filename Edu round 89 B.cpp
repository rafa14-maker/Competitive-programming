#include<bits/stdc++.h>
using namespace std;

#define LL long long int
#define L long int
#define IM INT_MAX
#define Im INT_MIN
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)


int main(){


int t;

cin>>t;

while(t--){
    LL a,b,ans=0;
    cin>>a>>b;
    if(a==0 || b==0)cout<<0<<endl;
    else if(a==b)cout<<(a+b)/3<<endl;
    else if(a*2<=b)cout<<a<<endl;
    else if(b*2<=a)cout<<b<<endl;
    else cout<<(a+b)/3<<endl;
}

return 0;
}
