#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q=0;
    while(1)
    {
       int n,k;
       cin>>n>>k;
       if(n==0&&k==0)break;
       map<string,int>mp;
       for(int i=0;i<n;i++)
       {
           string str;
          getline(cin,str);
           mp[str]=1;
       }
        cout<<"hello"<<endl;
       string mx_box;

       double com=0,mxsum=0;
      // getchar();
     /*  while(k--)
       {
           string str;
            getline(cin,str);
           double sum;
           int re;
           cin>>sum;
           cin>>re;
           double counter=0;
        cout<<sum<<" "<<re<<" "<<str<<endl;
           for(double i=0;i<re;i++)
           {
               string s;
                getline(cin,s);
               if(mp[s]==1)counter++;
           }

           double kp=counter/re;

           if(kp>com)
           {
               com=kp;
               mx_box=str;
               mxsum=sum;
           }
           if(kp==com)
           {
               if(mxsum<sum)
               {
                   mxsum=sum;
                   mx_box=str;
               }
           }
       }
       printf("RFP #%d\n",++q);
       cout<<mx_box<<endl;*/
    }
}
