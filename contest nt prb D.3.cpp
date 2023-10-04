#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,a,b,n,i,k=0,counter;

    string arr;


    while(cin>>arr)
    {
        k++;
        cin>>n;
       printf("case %d:\n",k);
       while(n--)
       {
           cin>>a>>b;
           if(a>b)
           {
               swap(a,b);
           }
           counter=0;
           for(i=a;i<b;i++)
           {
               if(arr[i]!=arr[i+1])
               {
                  counter++;
               }
           }
           if(counter==0)
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
