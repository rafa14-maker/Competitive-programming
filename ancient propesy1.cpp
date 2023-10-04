#include<bits/stdc++.h>
using namespace std;

int main()
{
    int day[]={31,28,31,30,31,30,31,31,30,31,30,31};
    map<string,int>krr;
    string arr,zrr;
    cin>>arr;

   for(int i=0;i<arr.size()-9;i++)
   {
       if(arr[i+2]!='-'||arr[i+5]!='-')
       {
           continue;
       }
       else if(arr[i+2]==arr[i+5]&&arr[i+5]=='-'&&arr[i]>='0'&&arr[i]<='9'&&arr[i+1]>='0'&&arr[i+1]<='9'&&arr[i+3]>='0'&&arr[i+3]<='9'&&arr[i+4]>='0'&&arr[i+4]<='9'&&arr[i+6]>='0'&&arr[i+6]<='9'&&arr[i+7]>='0'&&arr[i+7]<='9'&&arr[i+8]>='0'&&arr[i+8]<='9'&&arr[i+9]>='0'&&arr[i+9]<='9')

       {
           zrr={""};
           zrr=arr.substr(i,10);
           int a=arr[i+1]-'0';
           a+=10*(arr[i]-'0');

             int b=arr[i+4]-'0';
           b+=10*(arr[i+3]-'0');

           int c=arr[i+9]-'0';
           c+=10*(arr[i+8]-'0');
           c+=100*(arr[i+7]-'0');
           c+=1000*(arr[i+6]-'0');

         //  cout<<a<<" "<<b<<" "<<c<<" "<<day[b-1]<<endl;

           if(day[b-1]<a||c>2015||c<2013||b<=0||b>12||a<=0||a>31)
           {
               continue;
           }
           else
           {
               krr[zrr]++;
           }

       }
   }

   map<string,int>::iterator it;
   int l=0;

   for(it=krr.begin();it!=krr.end();it++)
   {
       if(it->second>l)
       {
           zrr=it->first;
           l=it->second;
       }
   }

   cout<<zrr<<endl;

}
