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


    double r,a,b,c,d;

    cin>>r>>a>>b>>c>>d;

    double t=sqrt(pow(c-a,2)+pow(d-b,2));

    cout<<ceil(t/(2*r));

}



