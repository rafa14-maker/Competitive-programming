#include<bits/stdc++.h>
using namespace std;



int main()
{
 int a,b=0,i=0;

 while(i<5)
 {
     cin>>a;
     b+=a;
     i++;
 }
 if(b%5==0)
 {
     cout<<b/5<<endl;
 }
 else
 {
     cout<<-1<<endl;
 }
}
