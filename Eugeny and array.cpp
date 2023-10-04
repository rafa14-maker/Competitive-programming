/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //seive();
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   int n,m;
   cin>>n>>m;

   int counter=0,k,i,j,found=0;

   while(n--)
   {
       cin>>k;
       if(k==-1)found++;
       else counter++;
   }

   while(m--)
   {
       cin>>i>>j;
       if(((j-i)+1)%2==0)
       {
           if(((j-i)+1)/2<=counter&&(((j-i)+1)/2)<=found)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
       }
       else
       {
           cout<<0<<endl;
       }
   }

}


