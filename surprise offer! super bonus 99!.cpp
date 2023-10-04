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

 long long a,b;
   cin>>a>>b;

   if(b==0)
   {
       cout<<a<<endl;
       return 0;
   }

   long long n=a,found=1,sum=0;

   while(sum<b)
   {
       while(sum+found<=b&&(n+1)%(found*10)!=0)
       {
           sum+=found;
           n-=found;
       }
        if(sum+found>b)break;
        found*=10;
   }

   if((n+1)%(found*10)!=0)
   {
       while(n+found<=a)n+=found;
   }
   cout<<n<<endl;

}


