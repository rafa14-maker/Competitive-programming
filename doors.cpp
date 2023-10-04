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

    int n;
    cin>>n;

    int l=0,r=0,a;

    for(int i=0;i<n;i++)
    {
       cin>>a;
       if(a)l=i+1;
       else r=i+1;
    }
    cout<<min(l,r)<<endl;

}



