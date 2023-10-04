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

    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        if(i%4==1)cout<<"a";
        if(i%4==2)cout<<"b";
        if(i%4==3)cout<<"c";
        if(i%4==0)cout<<"d";
    }
cout<<endl;
}



