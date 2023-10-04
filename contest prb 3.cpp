#include<bits/stdc++.h>
using namespace std;

int main()
{
   int i,j;

   string arr,frr,crr;

   cin>>arr>>frr;

   for(i=0;arr[i]!='\0';i++)
   {
       if(arr[i]=='1'&&frr[i]=='1')
       {
           crr[i]='1';
       }

       else if(arr[i]=='0'&&frr[i]=='1'||arr[i]=='1'&&arr[i]=='0')
       {
           crr[i]='1';
       }
       else
       {
           crr[i]='0';
       }
   }
     crr[i]='\0';
    cout<<crr<<endl;

    return 0;
}
