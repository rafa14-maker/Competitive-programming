/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //seive();
     freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c;
    cin>>c;
    int n=3;
    while(n--)
    {
        cin>>a>>b;
        if(a==c)
        {
            c=b;
        }
        else if(b==c)
        {
            c=a;
        }
    }
    cout<<c<<endl;
}



