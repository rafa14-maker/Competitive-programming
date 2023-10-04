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

    double n,x,y,a,b,ans=0,x1,y1,p;

    set<double>arr;

    cin>>n>>x>>y;

    for(int i=0;i<n;i++)
    {
        cin>>x1>>y1;

        a=x-x1;
        b=y-y1;

        if(a==0)
        {
            ans=1;
        }
        else
        {
            p=b/a;
            arr.insert(p);
        }
    }

    cout<<arr.size()+ans<<endl;

}



