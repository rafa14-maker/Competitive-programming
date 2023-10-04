#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int r=2*1000*1000*1000,l=(r*(-1));
    while(n--)
    {
        string arr,frr;
        int k;
        cin>>arr;
        cin>>k;
        cin>>frr;

        if(frr=="N")
        {
            if(arr=="<=")arr=">";
             else if(arr==">=")arr="<";
             else if(arr=="<")arr=">=";
              else if(arr==">")arr="<=";
        }
        if(arr==">=")l=max(k,l);
       else if(arr=="<=")r=min(k,r);
       else if(arr==">")l=max(l,k+1);
         else if(arr=="<")r=min(r,k-1);
    }

    if(l<=r)cout<<l;
    else cout<<"Impossible"<<endl;
}
