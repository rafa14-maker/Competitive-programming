/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //seive();
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int a,i,j,l,b,k,m,n,c;
   cin>>a>>i>>j>>l>>b>>k>>m>>n>>c;
   c=((j+m)+(i+j)-(m+n))/2;
   a=j+m-c;
   b=(a+i+j)-(l+k);
  cout<<a<<" "<<i<<" "<<j<<endl<<l<<" "<<b<<" "<<k<<endl<<m<<" "<<n<<" "<<c<<endl;
}



