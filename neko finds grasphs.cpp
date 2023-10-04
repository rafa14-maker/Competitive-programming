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

    int n,m;
    cin>>n>>m;

    int e1=0,e2=0,o1=0,o2=0;

    while(n--)
    {
        int a;
        cin>>a;

        if(a%2==0)
        {
            e1++;
        }
        else
        {
            o1++;
        }
    }
       while(m--)
    {
        int a;
        cin>>a;

        if(a%2==0)
        {
            e2++;
        }
        else
        {
            o2++;
        }
    }
    cout<<min(o1,e2)+min(o2,e1);
}



