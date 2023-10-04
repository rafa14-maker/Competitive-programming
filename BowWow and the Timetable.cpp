#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
   long long int k=s.size();
   if(k%2==0)
   {
       cout<<k/2;
   }
   else
   {
       int flag=0;
       for(int i=1;i<s.size();i++)
       {
           if(s[i]=='1')
           {
               flag++;
               break;
           }
       }
       if(flag==0)
       {
           cout<<k/2;
       }
       else
       {
           cout<<(k/2)+1;
       }
   }

}
