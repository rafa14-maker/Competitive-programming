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

  int n,k,l,c,d,p,nl,np;

  cin>>n>>k>>l>>c>>d>>p>>nl>>np;

  cout<<min(min((k*l)/nl,c*d),p/np)/n<<endl;


}


