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

    double p=1.*a/b;
    double q=1.*c/d;

    double ans= p/(1-(1-p)*(1-q));

    printf("%.10lf\n",ans);

}



