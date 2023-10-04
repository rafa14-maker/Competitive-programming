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

    int a=0,b=0;

    while(n--)
    {
        int k;
        cin>>k;
        if(k==1)a++;
        else b++;
    }

    if(b>0)
    {
        cout<<2<<" ";
        b--;
    }
    if(a>0)
    {
        cout<<1<<" ";
        a--;
    }

    while(b>0)
    {
        cout<<2<<" ";
        b--;
    }

     while(a>0)
    {
        cout<<1<<" ";
        a--;
    }

}


