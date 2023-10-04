/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c,d;

    cin>>a>>b>>c>>d;

    a*=d;

    b*=c;

    int k=__gcd(a,b);

    cout<<abs(a-b)/k<<"/";
    if(a>b)cout<<a/k;
    else  cout<<b/k;

}



