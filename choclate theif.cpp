#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,min1=10000,max1=0,a,b,c,k;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        string frr,arr,krr;
        min1=10000,max1=0;
        for(int j=0;j<n;j++)
        {
            cin>>krr;
            cin>>a>>b>>c;
            k=a*b*c;

            if(min1>k)
            {min1=k;
                arr=krr;}
            if(max1<k)
            {max1=k;
            frr=krr;}

        }
       printf ("Case %d: ",i);
        if (min1==max1) puts("no thief");
        else cout <<frr<<" took chocolate from "<<arr<< endl;
    }
}
