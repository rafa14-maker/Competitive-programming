#include<bits/stdc++.h>
using namespace std;

int main()
{
   // int n;
    string s;
    cin>>s;
    char k=s[0];
    for(int i=0;i<s.size();i++)
    {
       if(i==0)
       {
           cout<<"Mike"<<endl;
           k=s[i];
       }
       else
       {
           if(k<s[i])
           {
               cout<<"Ann"<<endl;
              // k=s[i];
           }
           else
           {
               cout<<"Mike"<<endl;
               k=s[i];
           }
       }
    }
}
