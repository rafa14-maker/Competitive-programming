#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        vector<int>v;
        int a,b,c;
        cin>>a>>b;
        v.push_back(a);
        v.push_back(b);
        while(1)
        {
            scanf("%d",&c);
            if(c==0)break;
            else v.push_back(c);
        }
        if(v.size()==2&&a==0&&b==0&&c==0)break;

       int n=v.size();
       int krr[n+5],arr[n+5],frr[n+5],prr[n+5];
       for(int i=0;i<n;i++)
       {
           krr[i]=0;
           frr[i]=0;
       }
       bool flag[n+5];
       for(int i=0;i<n;i++)flag[i]=true;
       for(int i=0;i<n;i++)
       {
           arr[i]=v[i];
       }
       for(int i=0;i<n;i++)
       {
           prr[i]=arr[i]-5;
       }

       int op=21600;
       bool tr=false;

       while(op--)
       {
           for(int i=0;i<n;i++)krr[i]++;

           for(int i=0;i<n;i++)
           {
               if(krr[i]==prr[i])
               {
                   frr[i]++;
                   int k=frr[i]%3;
                   if(k==0)
                   {
                       flag[i]=true;
                       prr[i]+=(arr[i]-5);
                   }
                   else if(k==1)
                   {
                       flag[i]=false;
                       prr[i]+=5;
                       tr=true;
                   }
                   else
                   {
                       flag[i]=false;
                       prr[i]+=arr[i];
                   }
               }
           }
          if(tr)
           {
               bool kp=true;
               for(int i=0;i<n;i++)
               {
                   if(!flag[i])kp=false;
               }
               if(kp)break;
           }
       }
       if(krr[0]==21600)printf("Signals fail to synchronise in 5 hours\n");
       else
       {//cout<<krr[0]<<" "<<krr[1]<<endl;
           int a,b,c;
           int k=krr[0];
           a=k/3600;
           b=(k%3600)/60;
           c=k%60;
           if(a<=9)cout<<0<<a<<":";
           else cout<<a<<":";
           if(b<=9)cout<<0<<b<<":";
           else cout<<b<<":";
           if(c<=9)cout<<0<<c<<endl;
           else cout<<c<<endl;
       }
    }
}
