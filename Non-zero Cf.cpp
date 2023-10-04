#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--){
    int n;
    int counter=0,flag=0;
    cin>>n;
   long long sum=0;
   for(int i=0;i<n;i++)
   {
       int a;
       cin>>a;
       if(a==0)counter++,a+=1;
       sum+=a;

   }
  if(sum==0)counter++;
  cout<<counter<<endl;

    }
}
