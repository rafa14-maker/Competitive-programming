#include<bits/stdc++.h>
using namespace std;

int main()
{
     int i,n,a=0,counter=0,b=0,c=0,d=0,k=0,ml;

    cin>>n;

    int arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            d++;
        }
        if(arr[i]==2)
        {
            c++;
        }
        if(arr[i]==3)
        {
            b++;
        }
        if(arr[i]==4)
        {
            a++;
        }
    }


    counter+=a;



   counter+=b;

   d-=b;
   if(d<0)
   {
       d=0;
   }
   counter+=((c/2)+c%2);

   d=d-2*(c%2);

   if(d>0)
   {
       counter+=d/4;
          }

    if(d%4>0)
    {
        counter++;
    }

   cout<<counter<<endl;

}
