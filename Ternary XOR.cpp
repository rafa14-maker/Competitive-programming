#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
       string s;
       cin>>s;
       string a,b;
       int counter=0;
       for(int i=0;i<n;i++)
       {
           if(s[i]=='0')
           {
               a+='0';
               b+='0';
           }
           else if(s[i]=='2')
           {
               if(counter==0){
               a+='1';
               b+='1';
             //  counter++;
             }
               else
               {
                   a+='2';
                   b+='0';
               }
           }
           else if(s[i]=='1')
           {
               a+='1';
               b+='0';
               if(counter==0)
               {
                   counter++;
                   swap(a,b);
               }
           }
       }
       cout<<a<<endl<<b<<endl;
    }
}
