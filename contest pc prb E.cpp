#include<bits/stdc++.h>
using namespace std;

int main()
{

 int a,b,n,m,k,l,cost1,cost2,cost3;

 cin>>n>>m>>a>>b;

 if(n%m==0)
 {
     cost1=n*a;
     cost2=(n/m)*b;

     if(cost1>cost2)
     {
         cout<<cost2<<endl;
         return 0;
     }
     else
     {
         cout<<cost1<<endl;
         return 0;
     }
 }
 else
 {
     cost1=n*a;
     k=(n/m);
     cost2=(k*b)+b;
     l=n-(k*m);
     cost3=(k*b)+l*a;

     if(cost1>cost2&&cost2<cost3)
     {
       cout<<cost2<<endl;
       return 0;
     }
     else if(cost2>cost1&&cost1<cost3)
        {
            cout<<cost1<<endl;
            return 0;
        }
        else
        {
            cout<<cost3<<endl;
        }
 }

}
