#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,m,i,j,p=0,a,b;

    string krr,arr;

    while(cin>>krr)
    {
        cin>>arr;

        cin>>n;

       int frr[n];

       for(i=0;i<n;i++)
       {
           cin>>a>>b;

           char k=arr[a];int counter=0;

           for(j=a;j<=b;j++)
           {
               if(arr[j]!=k)
               {
                   counter++;
                   break;
               }
               k=arr[j];
           }

           if(counter==0)
           {
               frr[i]=0;
           }
           else
           {
               frr[i]=1;
           }

       }
       p++;

       cout<<"case "<<p<<":"<<endl;

       for(i=0;i<n;i++)
       {
           if(frr[i]==0)
           {
               cout<<"YES"<<endl;
           }
           else
           {
               cout<<"NO"<<endl;
           }
       }




    }

}
