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

    int odd[n+5],even[n+5],a=0,b=0,k=100000,p=10000;

    for(int i=0;i<n;i++)
    {
        int c;
        cin>>c;
        if(c>0&&c%2==0)
        {
            even[a]=c;
            a++;
        }
        else if(c>0&&c%2==1)
        {
            odd[b]=c;
            b++;
        }
      if(c<0)
      {
          c=c*(-1);
        if(c%2==0)
        {
           k=min(k,c);
        }
        else if(c%2==1)
        {
            p=min(p,c);
        }
    } }
    k=k*(-1);
    p=p*(-1);
    /*
    for(int i=0;i<a;i++)cout<<even[i]<<" ";
    cout<<endl;
    for(int i=0;i<b;i++)cout<<odd[i]<<" ";
    cout<<endl;
    cout<<k<<endl;
    cout<<p<<endl;*/


}



