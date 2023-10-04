#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a;
  if(a>1918){
    if(a%400==0||((a%4==0)&&(a%100!=0)))
    {
        cout<<12<<"."<<0<<9<<"."<<a<<endl;
    }

    else
    {
        cout<<13<<"."<<0<<9<<"."<<a<<endl;
    }}
    else if(a<=1918){

               if(a==1918)
               {
                    cout<<26<<"."<<0<<9<<"."<<a<<endl;
               }
               else if(a%4==0)
               {
                    cout<<12<<"."<<0<<9<<"."<<a<<endl;
               }
               else
               {
                    cout<<13<<"."<<0<<9<<"."<<a<<endl;
               }

    }

}
