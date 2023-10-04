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

    int a,b,c,d,k,l,p;
    char f;

    cin>>a>>f>>b>>c>>f>>d;

    k=(a*60)+b;
    l=(c*60)+d;

    p=(k+l)/2;

    if(p/60<10)
    {
        cout<<0<<p/60;
    }
   else
   {
       cout<<p/60;
   }
   cout<<":";
   if(p%60<10)
   {
       cout<<0<<p%60;
   }
   else
   {
       cout<<p%60;
   }

}



