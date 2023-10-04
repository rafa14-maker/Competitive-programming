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

long long int n,m;

cin>>n>>m;
long long int p=(n-m)+1;

cout<<(m*(n/m-1)+(n%m)*2)*(n/m)/2<<" "<<(p*(p-1))/2<<endl;


}


