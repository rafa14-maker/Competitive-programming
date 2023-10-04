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
    int n,d,a,sum=0;

    cin>>n>>d;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        sum+=a;
    }
    if(sum+(10*(n-1))>d)cout<<-1;
    else
    {
       cout<<(d-sum)/5;
    }

}


