#include<bits/stdc++.h>
using namespace std;

int main()
{
  string  arr ={'1','2','3','4','5','6','7','8','9','0','-','Q','W','E','R','T','Y','U','I','O','P','[',']','A','S','D','F','G','H','J','K','L',';','Z','X','C','V','B','N','M',',','.','/'};

   string frr,crr;

   cin>>frr;

   int i,j,k;

   for(i=0;i<frr.size();i++)
   {
       if(frr[i]==' ')
       {
           continue;
       }
       else{
       crr[i]=frr[i+1];}
   }


   cout<<crr;

}
