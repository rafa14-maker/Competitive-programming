#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    getchar();
    while(q--)
    {
        string str;
    getline(cin,str);

    int m=0,f=0,rm=0,rf=0,it=0;

   for(int i=0;i<str.size();i++)
   {
       if(str[i]!=' ')
       {
           if(str[i]=='M')m++;
           else f++;
           if(str[i+1]=='M')rm++;
           else rf++;
           i++;
           it++;
       }
   }
   //  int len=v.size()-1;
    // if(v[0][0]==v[len][1])flag++;
     if((m==rf||f==rm)&&it>1)cout<<"LOOP"<<endl;
     else cout<<"NO LOOP"<<endl;

    }
}
