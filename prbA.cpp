#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,l;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>j;
       int counter=0;
         while(j>0)
         {
             j-=5;
             if(j%3==0&&j>0)
             {
                cout<<"Case "<<i+1<<": "<<j<<endl;
                counter++;
                 break;
             }
         }
         if(counter==0)
         {
             cout<<"Case "<<i+1<<": "<<-1<<endl;
         }
    }


    return 0;
}
