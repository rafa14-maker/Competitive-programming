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

    cout<<n<<" ";
    if(n==1)return 0;

    while(n>0)
    {
    int counter=0;
   for(int i=2;i<=n;i++)
   {
       if(n%i==0)
       {
           cout<<n/i<<" ";
           n/=i;
           if(n==1)return 0;
           counter++;
           break;
       }
   }
   if(counter==0)
   {
       cout<<1<<endl;
       break;
   }

    }

}



