
#include<bits/stdc++.h>
using namespace std;

set<long long int>s;

long long int n;

void f(long long int x,long long y,long long int a=0)
{
    if(a>n)return ;

    if(a)s.insert(a);

    if(a||x)f(x,y,a*10+x);

    if(a||y)f(x,y,a*10+y);
}


int main()
{

   cin>>n;

   for(int i=0;i<10;i++)
   {
       for(int j=i;j<10;j++)
       {
           f(i,j);
       }
   }

   cout<<s.size()<<endl;

}



