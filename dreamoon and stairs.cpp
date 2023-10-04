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
  int n,m;
  cin>>n>>m;

 int p=(n+1)/2;

 p=(m+p-1)/m*m;

 if(p>n)p=-1;

 cout<<p;

}


