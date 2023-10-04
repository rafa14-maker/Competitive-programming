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

    int a,b;
    cin>>a>>b;

    int first=0,draw=0,second=0;

    for(int i=1;i<=6;i++)
    {
        int k=abs(a-i),l=abs(b-i);
        if(k==l)draw++;
        if(k>l)first++;
        if(k<l)second++;
    }
 cout<<second<<" "<<draw<<" "<<first<<endl;

}



