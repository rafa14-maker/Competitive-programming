#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,k;
        cin>>n>>k;

         string arr="";

         for(int i=0;i<pow(2,n);i++)
         {
             arr+='0';
         }

         for(int i=0;i<k;i++)
         {
             int a;
             cin>>a;
             arr[a-1]='1';
         }
           int counter=0;
         while(arr.size()>1)
         {
             string frr="";
             for(int i=0;i<arr.size();i+=2)
             {
                 if(arr[i]=='1'&&arr[i+1]=='1')frr+='1';
                 else if(arr[i]=='0'&&arr[i+1]=='0')frr+='0';
                 else frr+='0',counter++;
             }
             arr=frr;
         }
      cout<<counter<<endl;
    }
}
